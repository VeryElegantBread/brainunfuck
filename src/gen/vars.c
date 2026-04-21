#include <stdio.h>

#include "utils.h"
#include "vars.h"

int new_var(Vars *vars, int id) {
    int loc = vars->end;
    vars->end += 1;
    vars->vars[id] = loc;
    return loc;
}
