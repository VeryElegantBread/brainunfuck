#ifndef vars_h_INCLUDED
#define vars_h_INCLUDED

#include "type.h"

typedef struct {
    int vars[65535];
    int end;
} Vars;

int new_var(Vars *vars, int id, Type type);
void set_var(Vars *vars, int id, int value);
void add_to_var(Vars *vars, int id, int value);

#endif // vars_h_INCLUDED
