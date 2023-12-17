#include<stdio.h>
int main(int argc, char const *argv[])
{
 //2 X 3
 int marks[3][3];

     marks[0][0]= 90 ;//CSE
     marks[0][1]= 80 ;//ENG
     marks[0][2]= 89 ;//MATH

     marks[1][0]= 50 ;
     marks[1][1]= 30 ;
     marks[1][2]= 79 ;     

     marks[3][0]= 70 ;
     marks[3][1]= 40 ;
     marks[3][2]= 60 ;

    printf("The Marks of 1st student is : CSE:%d\t MATH:%d\t ENG:%d\t ",marks[0][0],marks[0][1],marks[0][2]);
    printf("\n");
    printf("The Marks of 2nd student is : CSE:%d\t MATH:%d\t ENG:%d\t ",marks[1][0],marks[1][1],marks[1][2]);
    printf("\n");
    printf("The Marks of 3rd student is : CSE:%d\t MATH:%d\t ENG:%d\t ",marks[3][0],marks[3][1],marks[3][2]);

 return 0;
}
