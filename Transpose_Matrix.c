#include<stdio.h>
int main(int argc, char const *argv[])
{
 //Raw matrix formate = 2x2 ;
  int array[2][2];
      array [0][0] = 1;
      array [0][1] = 2;
      array [1][0] = 3;
      array [1][1] = 4;
      //Displaying MATRIX order;
      printf("The Matrix  is :\n");
      printf("%d\t %d\t",array[0][0],array[0][1]);
      printf("\n");
      printf("%d\t %d\t\n",array[1][0],array[1][1]);
      //Displaying Transpose MATRIX order;
      printf("The transpose Matrix is :\n");
      printf("%d\t %d\t",array[0][0],array[1][0]);
      printf("\n");
      printf("%d\t %d\t",array[0][1],array[1][1]);
  return 0;
}
