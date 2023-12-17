#include<stdio.h>
int main(int argc, char const *argv[])
{
     int array[5]={2,7,4,5,9};
       for (int i = 0; i < 5; i++)//Elements displaying loop;
        {
         printf("Element is -%d : %d\n",i,array[i]);
       }
         int i , j ,temp;//swap variables;
           printf("Elements of array in sorted ascending order :");//Ascending Order define;
            for ( i = 0; i < 5; i++)
             {
                for (j = i + 1; j < 5; j++)
                {
                   if (array[i] > array[j])//swap the position;
                   {
                      temp = array[i];
                       array [i] = array[j];
                      array [j] =  temp ; 
                   }
                   
                }
                
              }
              for (i = 0; i < 5 ; i++)//Final Result;
                 {
                     printf("%d\t",array[i]);
                 }
            printf("\nElements of array in sorted descending order:");//descending Order define;
            for ( i = 0; i < 5; i++)
             {
                for (j = i + 1; j < 5; j++)
                {
                   if (array[i] < array[j])//swap the position;
                   {
                      temp = array[i];
                       array [i] = array[j];
                      array [j] =  temp ; 
                   }
                   
                }
                
              }
              for (i = 0; i < 5 ; i++)//Final Result;
                 {
                     printf("%d\t",array[i]);
                 }     
 return 0;
}
