#include<stdio.h>
#include<ctype.h>

int main()
{

    char string[100];
    printf("Enter your string:");
    gets(string);

    for(int i=0;string[i];i++){
        string[i]=toupper(string[i]);
    }
    printf("Uppercase string:%s\n",string);

    for(int i=0;string[i];i++){
        string[i]=tolower(string[i]);
    }

    printf("Lower string:%s\n",string);

    return 0;
}