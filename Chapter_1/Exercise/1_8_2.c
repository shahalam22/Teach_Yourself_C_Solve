#include <stdio.h>

int convert(int a);

int main(){
    int dollar, pound;
    printf("Enter amount of dollar : ");
    scanf("%d", &dollar);

    pound = convert(dollar);

    printf("Your amount in pound is %d", pound);
return 0;

}

int convert(int a){
    return a*2;
}
