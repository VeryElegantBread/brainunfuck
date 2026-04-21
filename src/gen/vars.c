#include <stdio.h>

#include "utils.h"
#include "type.h"
#include "vars.h"

int new_var(Vars *vars, int id, Type type) {
    int loc = vars->end;
    vars->end += size(type);
    vars->vars[id] = loc;
    return loc;
}

void set_var(Vars *vars, int id, int value) {
    go_to(vars->vars[id]);
    zero();
    plus(value);
}

void add_to_var(Vars *vars, int id, int value) {
    go_to(vars->vars[id]);
    if (value < 0)
        minus(-value);
    else
        plus(value);
}
