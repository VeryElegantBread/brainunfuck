#include <stdio.h>

#include "utils.h"
#include "vars.h"

int new_var(Vars *vars, int id)
{
    int loc = vars->end;
    vars->end += 1;
    vars->vars[id] = loc;
    return loc;
}

int set_var(Vars *vars, int id, int value)
{
    go_to(vars->vars[id]);
    zero_cell(vars->vars[id]);
    plus(value);
}

int add_to_var(Vars *vars, int id, int value)
{
    go_to(vars->vars[id]);
    if (value < 0)
        minus(-value);
    else
        plus(value);
}
