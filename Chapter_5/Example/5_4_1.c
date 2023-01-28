#include<stdio.h>

int main()
{

    int server_user[5][2]={
        1,24,
        2,28,
        3,19,
        4,8,
        5,15,
    };
    int server;
    printf("Enter the server number:");
    scanf("%d",&server);

if(server>=1 && server<=5){
    for(int i=0;i<5;i++){
        if(server==server_user[i][0]){
         printf("There are %d users on server %d",server_user[i][1],server);
         break;
        }
    }
}else{
    printf("Server is not listed");
}
    
    return 0;
}