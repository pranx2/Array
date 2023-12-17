#include<stdio.h>
#define max_rows 3
#define max_cols 3
int main(int argc, char const *argv[])
{
 int array[max_rows][max_rows];
 printf("Enter the value of array 3x3 :");
   for (int rows = 0; rows < max_rows ; rows++)
    {  for (int cols = 0; cols < max_cols; cols++)
   {
    scanf("%d",&array[rows][cols]);
   }
   }
   printf("\nMatrix in Value state ways:\n");
   for (int rows = 0; rows < max_rows ; rows++)
   {  for (int cols = 0; cols < max_cols; cols++)
   {
    printf("%d\t",array[rows][cols]);
   }
   printf("\n");
   }
   //Base changes condition->first matrix order ;
   int tem = array [0][0] ;
    array [0][0]= array [0][2]; 
    array [0][2] =  tem;
//Base changes condition->last matrix order ;
   int tem2 = array [2][0] ;
   array [2][0] = array [2][2];
   array [2][2] = tem2 ; 
   printf("\nMatrix after diagonals interchanged : \n");
   for (int rows = 0; rows < max_rows ; rows++)
   {
     for (int cols = 0; cols < max_cols; cols++)
      {
      printf("%d\t",array[rows][cols]);
     }
     printf("\n");
   }
   
 return 0;
}
