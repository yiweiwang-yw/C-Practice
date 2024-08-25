#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str = (char *)malloc(16);
    if (str)
    {
        strncpy(str, "123456789abcdef", 15);
        str[15] = '\0'; // adding this line for correct null-termination
        printf("str = %s.\n", str);
        free(str);
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}