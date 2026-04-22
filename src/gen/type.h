#ifndef type_h_INCLUDED
#define type_h_INCLUDED

typedef enum {
    U8,
    I8,
    U16,
    I16,
} Type;

int size(Type t);

#endif // type_h_INCLUDED
