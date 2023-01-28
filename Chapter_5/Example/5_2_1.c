#include<stdio.h>
#include<string.h>
int main()
{

    char str1[100],str2[100];
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    
    printf("Length of the first string is %d\n",strlen(str1));
    printf("Length of the second string is %d\n",strlen(str2));

    int check=strcmp(str1,str2);
    if(check==0){
        printf("Two strings are same\n");
    }else if(check<0){
        printf("First string is less than second string\n");
    }else{
        printf("First string is greater than second string\n");
    }

  if(strlen(str1)+strlen(str2)<100){
    strcat(str1," ");
    strcat(str1,str2);
    printf("After concatenation: %s\n",str1);
  }

   strcpy(str1,str2);
   printf("After copy: %s %s\n",str1,str2);

    return 0;
}