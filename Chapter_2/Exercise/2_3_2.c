#include <stdio.h>

int main(){
    int count;
    scanf("%d", &count);

    if(count<100){
        printf("Number is less than 100;");
        printf("It's square is %d", count*count);
    }
    return 0;
}
