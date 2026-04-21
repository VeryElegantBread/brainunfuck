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

#endif // expr_h_INCLUDED
