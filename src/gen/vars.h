#ifndef vars_h_INCLUDED
#define vars_h_INCLUDED

typedef struct {
  int vars[65535];
  int end;
} Vars;

int new_var(Vars* vars, int id);
int set_var(Vars* vars, int id, int value);
int add_to_var(Vars* vars, int id, int value);

#endif  // vars_h_INCLUDED
