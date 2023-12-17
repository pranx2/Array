#include<stdio.h>

  int arrayNUM(int array[] , int n );//function declared;

int main(int argc, char const *argv[])
{
     int n;//Array Size declared;
     printf("Input the array size :");//Size define;
     scanf("\t%d",&n);//Size define;
       int array[n]; //array size set on array;
//loop for define array values;
     for (int i = 0; i < n; i++)
     {
      printf("Enter the  %d value of array :",i);//Input and taking value;
      scanf("%d",&array[i]);//Input and taking value;
     }
     arrayNUM(array,n);//Function/Argument calling;
 return 0;
}
     //function Define;
    int arrayNUM(int array [], int n )
    {
     printf("In Order:\t");      //Array values in Ascending order;
     for (int i = 0; i < n; i++)//Array values in Ascending order;
     {
        printf("%d\t",array[i]);//Final Output;
     }
     printf("\n");//Array values in Descending order;
     printf("Reverse order:  ");//Array values in Descending order;
     for (int j = n-1 ; j >= 0  ; j--)
     {  
        printf("%d\t",array[j]);//Final Output;
     }  
    }
