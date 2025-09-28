#include "example_compilation_unit.h"

Vector2i add_vector2i(Vector2i a, Vector2i b)
{
    return (Vector2i){a.x + b.x, a.y + b.y};
}
