#include <stdio.h>

int f1(void);

int main(){
    double answer;
    answer = f1();
    printf("%f", answer);
    return 0;
}

int f1(void){
    return 100;
}

//double's format specifier is %lf 
//returned integer type value and stored in double type variable. I must match both of them.
