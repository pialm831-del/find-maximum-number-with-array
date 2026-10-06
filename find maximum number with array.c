#include<stdio.h>
int main()
{
  int array[5],i,max=array[0];
  printf(" please input 5 numbers\n");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&array[i]);
  }
  printf(" maximum number : ");
  for(i=0;i<=4;i++)
  {
if(array[i]>max)
  max=array[i];

  }
 printf("%d\n",max);

  return 0;
}

