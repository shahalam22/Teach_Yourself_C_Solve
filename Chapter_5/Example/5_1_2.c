#include<stdio.h>

int main(){

 int num1[10],num2[10];

 for(int i=0;i<10;i++){
   num1[i]=i+1;
 }
 for(int i=0;i<10;i++){
   num2[i]=num1[i];
 }
 for(int i=0;i<10;i++){
   printf("%d ",num2[i]);
 }

  return 0;
}
