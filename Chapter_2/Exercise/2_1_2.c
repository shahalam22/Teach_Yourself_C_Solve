#include <stdio.h>
int main(){
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if(num%2==0) printf("This is an even value.");
    if(num%2==1) printf("This is an odd value.");

    return 0;
}
