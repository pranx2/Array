#include<stdio.h>
int main(int argc, char const *argv[])
{
  int array[3]={2,5,7};
      for (int i = 0; i < 3; i++)//Elements displaying loop;
      {
        printf("Element - %d : %d\n",i,array[i]);
      }
        printf("The values store into the array are : ");
              for (int i = 0; i < 3; i++)//In order loop;
              {
                printf("%d\t",array[i]);
              }
    printf("\n");
        printf("The values store into the array in reverse are:");
              for (int i = 2; i >= 0 ; i--)//Reverse loop;
                      {
                        printf("%d\t",array[i]);
                      }
  return 0;
}
