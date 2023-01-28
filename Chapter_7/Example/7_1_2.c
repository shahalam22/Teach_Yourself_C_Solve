#include<stdio.h>

float get_num(void);

int main()
{
    float number;
    number=get_num();
    printf("The number is %f",number);
    return 0;
}

float get_num(void){
    float num;
    printf("Enter a floating point number:");
    scanf("%f",&num);
    return num;
}