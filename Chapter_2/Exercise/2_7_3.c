#include <stdio.h>

int main(){

    printf("%d\n", 0&&1||1); //prints 1 (true)
    printf("%d\n", 0&&(1||1)); //prints 0 (false)
    return 0;
}
