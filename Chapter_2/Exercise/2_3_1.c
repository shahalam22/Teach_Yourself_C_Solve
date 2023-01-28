#include <stdio.h>

int main(){
    int num1, num2, a;

    printf("1. Addition \n2. Subtraction\n");
    scanf("%d", &a);

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    if (a==1) printf("Addition is %d.", num1+num2);
    else printf("Subtraction is %d", num1-num2);
    return 0;
}
