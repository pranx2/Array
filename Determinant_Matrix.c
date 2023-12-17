#include<stdio.h>
#define max_rows 2
#define max_cols 2
int main(int argc, char const *argv[])
{
 int array [max_rows][max_rows];
 printf("\nEnter your matrix [2x2] :\n");
    for (int rows  = 0; rows <  max_rows; rows++)
     {
       for (int cols = 0; cols < max_cols; cols++)
       {
        scanf("%d",&array[rows][cols]);
       }
       printf("\n");
    }
    //Formula->
      int X = array[0][0] * array [1][1];
      int Y = array[1][0] * array [0][1];
      printf ("\n  determinant of a matrix is : %d\n  ",X-Y);
 return 0;
}
