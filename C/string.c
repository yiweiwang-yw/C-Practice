#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "Here we go";
    size_t str_size =  sizeof(str);
    size_t str_len = strlen(str);

    printf("The size of the string is %zu\n", str_size);
    printf("The length of the string is %zu\n", str_len);
}