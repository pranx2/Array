#include<stdio.h>
int main(int argc, char const *argv[])
{
  int number[5];
  //Input values->
     int *ptr = &number[0];
      for (int  i = 0; i < 5 ; i++)
      {
      printf("%d index is = ", i);
        scanf("%d",&number[i]);
      }
      //Output->
      for (int i = 0; i < 5 ; i++)
      {
      printf("%d index is = %d\n",i,number[i]);
      }
      
      
  return 0;
}
