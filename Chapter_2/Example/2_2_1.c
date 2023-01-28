#include<stdio.h>

int main(){
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if(num<0) printf("This is a    negative number.");
    else printf("This is a non-negative number.");

    return 0;
}
