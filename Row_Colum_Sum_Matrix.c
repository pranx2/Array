#include<stdio.h>
int main(int argc, char const *argv[])
{int array[2][2];
      array [0][0] = 5;
      array [0][1] = 6;
      array [1][0] = 7;
      array [1][1] = 8;
       //Displaying MATRIX order;
      printf("The Matrix of the given values is :\n");
      printf("%d\t %d\t",array[0][0],array[0][1]);
      printf("\n");
      printf("%d\t %d\t\n",array[1][0],array[1][1]);
      printf("\n");
         //The sum of rows  matrix;
            printf("The sum or rows and columns of the matrix is:\n");
           printf("%d\t %d\t %d\t",array[0][0],array[0][1],(array[0][0] + array[0][1]));
            printf("\n");
           //The sum of columns matrix;
           printf("%d\t %d\t %d\t\n",array[1][0],array[1][1],(array[1][0] + array[1][1]));
           printf("%d\t",(array[0][0] + array[1][0]));
           printf("%d\t\n",(array[0][1] + array[1][1]));
 return 0;
}
