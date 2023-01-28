#include<stdio.h>

int main()
{

    int n;
    float store=0.0;
    printf("Enter total numbers:");
    scanf("%d",&n);

    float num[n];

    printf("Enter your numbers:");
    for(int i=0;i<n;i++){
        scanf("%f",&num[i]);
    }

    for(int count=1;count<n;count++){
        for(int i=0;i<n-1;i++){
            if(num[i]>num[i+1]){
                store=num[i];
                num[i]=num[i+1];
                num[i+1]=store;
            }
        }
    }
    printf("\nAfter sorting:");
    for(int i=0;i<n;i++){
        printf("%.2f ",num[i]);
    }

    return 0;
}