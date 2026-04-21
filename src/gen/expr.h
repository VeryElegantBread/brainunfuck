#ifndef expr_h_INCLUDED
#define expr_h_INCLUDED

typedef struct {
    enum {
        Int,
        Var,
        Read,
    } type;
    union {
        int integer;
        int id;
    };
} Expr;

#include "vars.h"

void gen_expr(Vars *vars, Expr expr, int loc);

#endif // expr_h_INCLUDED
