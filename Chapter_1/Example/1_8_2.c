#include <stdio.h>

void func1();

int main(){
    func1();
    return 0;
}

void func1(){
    printf("This is printed.");
    return; /*Return with no value*/
    printf("This is never printed.");
}
