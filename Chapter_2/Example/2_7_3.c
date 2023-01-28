/*This program demonstrates the xor() function*/
#include <stdio.h>

int x_or(int a, int b);

int main(void){
    int p, q;

    printf("Enter p (0 or 1) : ");
    scanf("%d", &p);
    printf("Enter q (0 or 1) : ");
    scanf("%d", &q);

    printf("P AND Q : %d\n", p && q);
    printf("P OR Q : %d\n", p || q);
    printf("P XOR Q : %d\n", x_or(p,q));

    return 0;
    
}

int x_or(int a, int b){
    return (a||b) && !(a&&b);
}    
