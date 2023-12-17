#include<stdio.h>
int main(int argc, char const *argv[])
{
 int array[5]={1,2,3,4,5};
 printf("%d\n",*(array+2));//output--->3
 printf("%d\n",*(array+5));//output--->0(Location address)
 return 0;
}
