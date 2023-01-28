#include<stdio.h>
#include<string.h>

int main()
{

    char name[50];
    gets(name);

    strrev(name);
    printf("%s",name);

    return 0;
}