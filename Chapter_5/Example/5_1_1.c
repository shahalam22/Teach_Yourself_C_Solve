#include<stdio.h>

int main()
{

    int temp[31],avg=0,days,max=0,min=200;
    printf("How many days in a month:");
    scanf("%d",&days);

    for(int i=0;i<days;i++){
        printf("Enter noonday temp of day %d : ",i+1);
        scanf("%d",&temp[i]);
    }
    for(int i=0;i<days;i++){
        avg=avg+temp[i];
    }
    printf("Average temperature of the month:%d\n",avg/days);

    for(int i=0;i<days;i++){
      if(temp[i]>max) max=temp[i];
      if(temp[i]<min) min=temp[i];
    }

    printf("Maximum temperature:%d\n",max);
    printf("Minimum temperature:%d\n",min);

    return 0;
}
