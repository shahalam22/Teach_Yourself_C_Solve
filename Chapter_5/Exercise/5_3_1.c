#include<stdio.h>

int main()
{

    int threedim[3][3][3],count=1;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                threedim[i][j][k]=count++;
                printf("%d\t",threedim[i][j][k]);
            }
            printf("\t");
        }
         printf("\n");
     }

    return 0;
}