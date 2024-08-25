#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char c[10];
    int i;
    double d;
} widget;

int main(void)
{
    widget *p = malloc(sizeof(widget));
    widget w = {"abc", 9, 3.2};
    memcpy(p, &w, sizeof(widget));
    void *pointers;
    printf("p.i=%d.\n", p->i);
}