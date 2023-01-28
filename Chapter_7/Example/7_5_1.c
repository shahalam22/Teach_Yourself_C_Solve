//Old declaration form of function in program

#include <stdio.h>

int area(int l, int w)

int main(void){
    printf("area is %d", area(10, 13));
    return 0;
}

int area(l, w)
int l, w;
{
    return l*w;
}