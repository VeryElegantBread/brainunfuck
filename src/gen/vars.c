#include <stdio.h>

#include "utils.h"
#include "type.h"
#include "expr.h"
#include "vars.h"

int new_var(Vars *vars, int id, Type type) {
    int loc = vars->end;
    vars->end += size(type);
    vars->vars[id].loc = loc;
    vars->vars[id].type = type;
    return loc;
}

void set_var(Vars *vars, int id, Expr expr) {
    int var_loc = vars->vars[id].loc;
    gen_expr(vars, expr, var_loc);
}
