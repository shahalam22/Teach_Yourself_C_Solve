#include<stdio.h>

int main()
{

    int size,count=0;
  printf("Enter size of array:");
  scanf("%d",&size);
  int num[size];

  for(int i=0;i<size;i++){
      scanf("%d",&num[i]);
  }
  for(int i=0;i<size;i++){
    if(num[i]!=-1){
      for(int j=i;j<size;j++){
       if(num[i]==num[j]){
        count++;
        if(i!=j) num[j]=-1;
       }
      }
      printf("%d -> %d times\n",num[i],count);
      count=0;
    }
  }


    return 0;
}