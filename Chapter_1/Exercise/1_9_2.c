#include <stdio.h>

void sqr_it(int x);

int main(){
    sqr_it(2);
    sqr_it(3);
    sqr_it(4);
    return 0;
}

void sqr_it(int x){
    printf("%d\n", x*x);
}
