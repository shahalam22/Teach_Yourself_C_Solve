#include <stdio.h>
int main(){
    int i, j;
    
    printf("Enter first number : ");
    scanf("%d", &i);
    
    printf("Enter first number : ");
    scanf("%d", &j);

    /*Relational Operation*/
    printf("i < j %d\n", i<j);
    printf("i <= j %d\n", i<=j);
    printf("i == j %d\n", i==j);
    printf("i > j %d\n", i>j);
    printf("i >= j %d\n", i>=j);
    
    /*Logical Operation*/
    printf("i && j %d\n", i&&j);
    printf("i || j %d\n", i||j);
    printf("!i !j %d\n",!i,!j);

    return 0;
}
