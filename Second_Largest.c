#include<stdio.h>

int main(int argc, char const *argv[])
{
 int n;
 printf("Enter the size value of array :");
 scanf("%d",&n);
 int array[n];
 printf("Enter the array's value : ");
 for (int i = 0; i < n; i++)
 {
  scanf("%d",&array[i]);
 }
  int max1 = array[0];
  int max2 = array[0];
  
  for (int i = 0; i < n; i++)
  {
   if (array[i] > max1)
   {
    max2 = max1;
    max1 = array[i];
   }
  }
  printf("The second largest number is : %d",max2);
 return 0;
}
