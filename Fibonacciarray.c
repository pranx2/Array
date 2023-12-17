#include<stdio.h>

//CODE BY --->[PRANTO]
int main(int argc, char const *argv[])
{
 int n;//Size variable Declared;
    printf("Enter the size(n>2) : ");//Size taking;
       scanf("%d",&n);//Size taking;
           int fib [n];//Fibonacci size declared;
              fib [0]= 0;//first and second fibonacci defined;
                 fib [1]= 1;//first and second fibonacci defined;
                 printf("fib is : ");//Showing output;
          printf("%d\t",fib[0]);//Showing output-Fb-1st=0;
       printf("%d\t",fib[1]);//Showing output-Fib-2nd=1;
       
    for (int i = 2; i < n; i++)//loop for others fibonacci digits;
    {
         fib[i] = (fib[i-1] + fib[i-2]);//Fibonacci law's;
            printf("%d\t",fib[i]);//Final output;
    }
 return 0;
}

