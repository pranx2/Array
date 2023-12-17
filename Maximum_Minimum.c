#include<stdio.h>
int main(int argc, char const *argv[])
{
      int array[3]={45,25,21};
            for (int i = 0; i < 3; i++)//Elements displaying loop;
                  {
                     printf("Element - %d : %d\n",i,array[i]);
                  }
               int max =  array[0];//maximum declared;
               int min =  array[0];//minimum Declared;
               for (int i = 0; i < 3 ; i++)//Condition taken loop;
               {
                  if (array[i] > max )
                  {
                     max = array[i];
                  }
                  if (array[i] < min )
                  {
                     min = array [i];
                  }
               }
               //Final output;
               printf("Maximum element is: %d \n",max);
               printf("Minimum element is: %d \n",min);
               
return 0;
}