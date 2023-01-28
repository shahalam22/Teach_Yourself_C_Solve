#include <stdio.h>

int main(){
    int choice;
    float num;

    printf("Enter Value : ");
    scanf("%f", &num);

    printf("1. Feet to Meter \n2. Meter to Feet\n");
    Printf("Enter Choice : ");
    scanf("%d", &choice);

    if(choice==1) printf("%f", num/3.28);
    if(choice==2) printf("%f", num*3.28);

    return 0;
}
