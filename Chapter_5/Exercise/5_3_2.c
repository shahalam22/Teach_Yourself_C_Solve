#include<stdio.h>

int main()
{

    int threedim[3][3][3],count=1,sum=0;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                threedim[i][j][k]=count++;
                sum=sum+threedim[i][j][k];
                printf("%d\t",threedim[i][j][k]);
            }
            printf("\t");
        }
         printf("\n");
     }
     printf("\nSum of all elemenrs:%d\n",sum);

    return 0;
}