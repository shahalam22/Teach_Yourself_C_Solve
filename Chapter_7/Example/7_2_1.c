#include<stdio.h>

void recursion(int n);
void recursion2(int n);

int main(){
    recursion(0);
    printf("\n"); 
    recursion2(0);

    return 0;
}

void recursion(int n){
    if(n<10){
        recursion(n+1);
        printf("%d ",n);
    }
}

void recursion2(int n){
    if(n<10){
        printf("%d ",n);
        recursion2(n+1);
    }
}