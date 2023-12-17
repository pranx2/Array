#include<stdio.h>
   //Function Declared;
   void number(int array[],int n);

int main(int argc, char const *argv[])
{

      int array[5]={1,2,3,4,5};
         number(array,5);//Function Call;

   return 0;
}
//Function Define;
      void number(int array[],int n ){
         for (int i = 0; i <  n ; i++)
         {
            printf("%d \t",array[i]);
               }
      
      }