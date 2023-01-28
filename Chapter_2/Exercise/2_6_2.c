#include <stdio.h>

int main() {
    int i, num;
    printf ("Enter a number : ");
    scanf("%d", &num);

    for(i=num; i>=0; i--) {
        printf("%d\n", i);
        if(i==0) printf("\a"); 
    } 
    return 0;
}
