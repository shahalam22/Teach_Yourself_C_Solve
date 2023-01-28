#include <stdio.h>
int main(){
    func();
    return 0;
}

void func(void){
    int i;
    printf("Enter a number : ");
    scanf("%d", &i);
    return i;
}

//Return type and Return value is not same
