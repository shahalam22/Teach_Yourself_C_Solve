#include<stdio.h>
#include<conio.h>

int main()
{

    char message[100];
    printf("Enter your message:");
    for(int i=0;i<100;i++){
        message[i]=getche();
        if(message[i]=='\r'){
            break;
        }
    }
    printf("\nAfter encoding:");
    for(int i=0;message[i]!='\r';i++){
        printf("%c",message[i]+1);
    }

    return 0;
}