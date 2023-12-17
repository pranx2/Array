#include<stdio.h>
#define max 5

int main(int argc, char const *argv[])
{
  int array[max];
  printf("Enter the value of array:");
  for (int i = 0; i < max; i++)
  {
    scanf("%f",&array[i]);
  }
  int n;
  printf("Enter the number of right rotate times :");
  scanf("%d",&n);
  printf("The array is :");
  for (int i = n ; i >= 0 ; i--)
  {




    printf("%d\t",array[i]);
  }
  return 0;
}
