#include "../src/example_compilation_unit.h"

#include <rktest/rktest.h>

TEST(tests, add_vector2i_test)
{
    Vector2i v1 = {1, 2};
    Vector2i v2 = {3, 4};
    Vector2i v3 = add_vector2i(v1, v2);
    EXPECT_EQ(v3.x, v1.x + v2.x);
    EXPECT_EQ(v3.y, v1.y + v2.y);
}

TEST(tests, sub_vector2i_test)
{
    // TODO
}