// An argument to a function can consist of an expression. 

#include <stdio.h>

void sum(int x, int y);

int main(){
    sum(10+2, 9*7);
    return 0;
}

void sum(int x, int y){
    printf("%d", x+y);
}

