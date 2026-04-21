#ifndef vars_h_INCLUDED
#define vars_h_INCLUDED

#include "type.h"

typedef struct {
    struct {
        int loc;
        Type type;
    } vars[65535];
    int end;
} Vars;

#include "expr.h"

int new_var(Vars *vars, int id, Type type);
void set_var(Vars *vars, int id, Expr expr);

#endif // vars_h_INCLUDED
