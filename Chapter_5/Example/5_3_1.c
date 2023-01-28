#include<stdio.h>

int main()
{

    int basket_ball[4][5];

    for(int i=0;i<4;i++){
        printf("Quarter %d:\n",i+1);
        for(int j=0;j<5;j++){
          printf("Player %d points: ",j+1);
          scanf("%d",&basket_ball[i][j]);
        }
        printf("\n");
    }
    for(int k=0;k<5;k++){
        printf("\t\tPlayer %d",k+1);
    }printf("\n");
    for(int i=0;i<4;i++){
        printf("Quarter %d\t",i+1);
        for(int j=0;j<5;j++){
          printf("%d\t\t\t",basket_ball[i][j]);
        }
        printf("\n");
    }


    return 0;
}