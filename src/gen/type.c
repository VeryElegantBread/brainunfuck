#include "type.h"

int size(Type t) {
    switch (t) {
        case U8:
        case I8: return 1;
        case U16:
        case I16: return 2;
    }
}
