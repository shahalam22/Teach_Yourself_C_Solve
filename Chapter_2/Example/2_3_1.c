#include <stdio.h>

int main(){
    float num;
    int a;

    printf("1. Feet to Meter 2. Meter to feet\n");
    printf("Enter choice : ");
    scanf("%d", &a);

    if(a==1){
        printf("Enter number of feet : ");
        scanf("%f", &num);
        printf("Meter : %f", num/3.28);
}

    else{
        printf("Enter number of meter : ");
        scanf("%f", &num);
        printf("Feet : %f", num/3.28);
}

    return 0;
}
