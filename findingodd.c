#include<stdio.h>
 int count_odd (int array[], int n );
 
int main(int argc, char const *argv[])
{
 int array[]={1,2,3,4,5,6};
 int n = 6 ;
  printf("Total odd number is : %d",count_odd(array,6));
   //printf("Total odd number is : %d",count_odd)
 return 0;
}

int count_odd (int array[],int n){
   int count = 0;
   for (int i= 0; i<n ; i++ )
   {
     if (array[i] % 2 != 0)//Finding ODD Number;
     {
       count++;
       printf("ODD NUMBER IS : %d\n",array[i]);
     }
   }
   return count;
}
