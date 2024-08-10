#include <stdio.h>

int main(void){
    char abc[] = "abc";
    char xyz[] = "xyz";

    printf("%c\n",abc[1]);
    
    char *p = abc;
    printf("%c\n", ++*p);

    p = xyz;
    printf("%c",*p++);
}