#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

    char command[80],temp[80];
    int i,j;

    for(;;){
        printf("Operation commands: add,subtract,divide,multiply and quit\n");
        printf("Operation?:");
        gets(command);

        if(!strcmp(command,"quit")) break;

        printf("Enter first number:");
        gets(temp);
        i=atoi(temp);

        printf("Enter second number:");
        gets(temp);
        j=atoi(temp);

        if(!strcmp(command,"add")){
            printf("Sum : %d\n",i+j);
        }else if(!strcmp(command,"subtract")){
            printf("Subtraction : %d\n",i-j);
        }else if(!strcmp(command,"multiply")){
            printf("Multiplication : %d\n",i*j);
        }else if(!strcmp(command,"divide")){
           if(j) printf("Division : %d\n",i/j);
           else printf("Can not divide by zero\n");
        }else{
            printf("Unknown command");
        }
    }

    return 0;
}
