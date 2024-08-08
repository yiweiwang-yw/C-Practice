#include <stdio.h>

void function1(){
    printf("Function 1 called \n");
}

void function2(){
    printf("Function 2 called\n");
}

void function3(){
    printf("Function 3 called\n");
}

void invokeFunction(int index){
    void (*functionArray[3])() = {
        function1,
        function2,
        function3
    };
    if (index >= 0 && index <3){
        functionArray[index]();
    } else {
        printf("Invalid index\n");
    }
}

int main(){
    invokeFunction(0);
    invokeFunction(1);
    invokeFunction(2);
    invokeFunction(3);

    return 0;
}