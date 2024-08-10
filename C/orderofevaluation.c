#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))

int glob;

int f(void){
    return glob+10;
}

int g(void){
    glob = 42;
    return glob;
}

int main(void){
    
    int max_value = max(g(),f());
    printf("%i",max_value);
}