#include<stdio.h>
#include<string.h>

int main()
{

    char name[10][50];
    for(int i=0;i<10;i++){
        printf("Enter string %d:",i+1);
        gets(name[i]);
    }

    int num;

    do{
        printf("Enter string number:");
        scanf("%d",&num);
        num--;
          if(num>=0 && num<10)  printf("%s\n",name[num]);
    }while(num>=0);

    return 0;
}