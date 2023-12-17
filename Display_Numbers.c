#include<stdio.h>
int main(int argc, char const *argv[])
{
    int  values [5];
            printf("Enter the integers elements of an Array: ");
            //Taking input and storing it in an array->
                for (int i = 0; i < 5; i++)
                {
                    scanf("%d",&values[i]);
                }
            printf("\n\nDisplaying integers:");
        //printing elements of an Array->
            for (int j  = 0; j < 5 ; ++j)
            {
                printf("\n%d\n",values [j]);
            }
            
    return 0;
}
