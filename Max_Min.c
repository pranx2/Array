#include<stdio.h>
#define max 3 

int main(int argc, char const *argv[])
{
    int array[max];
    printf("Enter the values of array [max=3]:");
    for (int i = 0; i < max; i++)
      {
      scanf("%d",&array[i]);
      }
    int max_array = array[0]; 
    int min_array = array[0]; 
      for (int i = 0; i < max; i++)
      {
      if ( max_array < array[i] )
      {
       max_array = array[i];
      }
      if (min_array > array[i] )
      {
       min_array = array[i];
      }
     }
     printf("Maximum value of array is :%d\n",max_array );
     printf("Minimum value of array is :%d\n",min_array );
 return 0;
}
