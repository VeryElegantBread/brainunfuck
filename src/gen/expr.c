#include <stdio.h>

#include "type.h"
#include "utils.h"
#include "vars.h"
#include "expr.h"


void gen_expr(Vars *vars, Expr expr, int loc) {
    int expr_size = size(expr.type) - 1;
    zero_range(loc, expr_size);
    int loc_end = loc + expr_size;

    switch (expr.type) {
        case Int:
            go_to(loc_end);
            int data = expr.integer;
            for (int i; i <= expr_size && data; i++) {
                plus(data % 256);
                data /= 256;
                move(-1);
            }
            return;

        case Read:
            go_to(loc_end);
            putchar(',');
            return;

        case Var: ;
            int id = expr.id;
            int var_loc = vars->vars[id].loc;
            Type var_type = vars->vars[id].type;
            int var_size = size(var_type) - 1;
            int var_end = var_loc + var_size;
            int smaller = (expr_size > var_size) ? var_size : expr_size;

            for (int i = 0; i < smaller; i++)
                copy_cell(var_end - i, loc_end - i);
            return;
    }
}
