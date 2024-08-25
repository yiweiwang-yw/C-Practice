#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>

int absolute_value(int a)
{
    if (a == INT_MIN)
    {
        return -(a + 1);
    }
    return (a < 0) ? -a : a;
}

void run_tests()
{
    assert(absolute_value(5) == 5);

    assert(absolute_value(-5) == 5);

    assert(absolute_value(0) == 0);

    assert(absolute_value(INT_MAX) == INT_MAX);

    assert(absolute_value(INT_MIN + 1) == -(INT_MIN + 1));

    assert(absolute_value(INT_MIN) == INT_MAX);

    printf("All test cases passed!\n");
}

int main()
{
    run_tests();
}