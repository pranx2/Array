#include<stdio.h>
#define max_rows 3
#define max_cols 3

int main(int argc, char const *argv[])
{
 printf("Enter the matrix values [3x3] : ");

 int array [max_rows][max_cols];

 for (int row = 0; row < max_rows; row++)
 {
     for (int col  = 0; col < max_cols; col++)
     {
         scanf("%d",&array[row][col]);
     }
     
 }
 printf("\nEntered elements in matrix of [3x3] format is  :\n");
for (int row  = 0; row < max_rows; row++)
           {
              for (int col = 0; col < max_cols; col++)
              {
               printf("%d\t",array[row][col]);
              }
              printf("\n");
           } 
 int temp0= array[0][0];
 int temp1= array[1][0];
 int temp2= array[2][0];
        array[0][0] = array[0][0];
        array[1][0] = array[0][1];
        array[2][0] = array[0][2];
               array[0][1] = temp1;
               array[0][2] = temp2;
                    int temp3 = array[2][1];
                    array[2][1] = array[1][2];
                    array[1][2] = temp3 ;
                     printf("\nThe given matrix is Symmetric matrix: \n");
           for (int row  = 0; row < max_rows; row++)
           {
              for (int col = 0; col < max_cols; col++)
              {
               printf("%d\t",array[row][col]);
              }
              printf("\n");
           }
                    
 return 0;
}
