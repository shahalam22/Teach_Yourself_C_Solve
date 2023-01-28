#include<stdio.h>

int main()
{

    int arr[][3]={
        1,1,1,
        2,4,8,
        3,9,27,
        4,16,64,
        5,25,125,
        6,36,216,
        7,49,343,
        8,64,512,
        9,81,729,
        10,100,1000,
    };
    int cube,i;
    printf("Enter cube:");
    scanf("%d",&cube);

    for(i=0;i<10;i++){
        if(cube==arr[i][2]){
            printf("Root's square:%d\n",arr[i][1]);
            printf("Cube root:%d\n",arr[i][0]);
            break;
        }
    }
    if(i==10) printf("Invalid cube");

    return 0;
}