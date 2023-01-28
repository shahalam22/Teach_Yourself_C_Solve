#include<stdio.h>
#include<string.h>

int main()
{

    char bigstr[1000]={}, str[100];

    for(;;){
        printf("Enter a string:");
        gets(str);

        if(!strcmp(str,"quit")) break;
        strcat(str,"\n");
        if(strlen(str)+strlen(bigstr)>=1000) break;
        strcat(bigstr,str);
    }
     printf(bigstr);

    return 0;
}