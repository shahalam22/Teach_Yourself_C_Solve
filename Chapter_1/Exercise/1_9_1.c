#include <stdio.h>

void outnum(int x);

int main(){
    outnum(4);
    outnum(5);
    outnum(6);
    return 0;
}

void outnum(int x){
    printf("%d\n", x);
}
