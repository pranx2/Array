#include<stdio.h>
int main(int argc, char const *argv[])
{
 int age = 22;
 int *ppt = &age ;
 printf("location is = %u\n",&age);
 printf("location is = %u\n",ppt);//ppt and &age are same;
 ppt++ ;//increments;
 printf("location is = %u\n",ppt);
 ppt--;//Decrements;
 printf("location is = %u\n",ppt);

 return 0;
}
