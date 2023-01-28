#include <stdio.h>

int main(){
    int i;
    for(i=17; i<=100; i=i+1){
        if (i%17==0) printf("%d\n", i);
    }
    return 0;
}
