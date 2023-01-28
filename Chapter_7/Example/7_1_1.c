#include<stdio.h>

double myvol(double a,double b,double c);

int main(){
    double vol;
    vol=myvol(12.5,5.63,8.75,13.56);
    printf("Volume = %lf",vol);

    return 0;
}

double myvol(double a,double b,double c){
     return a*b*c;
}