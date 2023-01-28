#include<stdio.h>
#include<stdlib.h>

int main(int argc , char *argv[]){
    double pounds;
    pounds= atof(argv[1])/16.0;
    printf("%.2f pounds",pounds);  

    return 0;
}