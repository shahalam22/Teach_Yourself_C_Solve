#include <stdio.h>
int main(){
    int num1, num2, a;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("1. Do ADDITION \n2. Do MULTIPLICATION\n");
    scanf("%d", &a);

    if(a==1) printf("Addition of two number is %d", num1+num2);
    else if(a==2) printf("Multiplication of two number is %d", num1*num2);

    return 0;

}
