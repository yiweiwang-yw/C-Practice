#include <stdio.h>

int m[3] = {2, 4, 6};

int main(void)
{
    int *pi;
    int j = 0;
    for (pi = &m[0]; pi < &m[3]; ++pi)
        j += *pi;
    printf("j is %i\n", j);
}