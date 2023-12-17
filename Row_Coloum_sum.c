#include<stdio.h>

#define max_rows 3 //Fixed rows value;
#define max_col 3 //fixed cols value;

int main(int argc, char const *argv[])
{
 int matrix [max_rows][max_rows];
  int sum = 0 ;
printf("Enter the elements of matrix 3x3: \t");
for (int row = 0; row < max_rows; row++)
{
     for (int col  = 0; col < max_col; col++)
     {
       scanf("%d\t",&matrix[row][col]);
      }
     
}
for (int row = 0; row < max_rows; row++)
{
     for (int col  = 0; col < max_col; col++)
     {
       if (col > row)
       {
        sum += matrix[row][col];
       }
       
     }
     
}
printf("The total sum of upper triangle matrix is : %d",sum);
 return 0;
}
