#include<stdio.h>
int main(int argc, char const *argv[])
{
  int f,a[3]={2,5,7}; 
    printf("The values store into the array are: ");
    for(f=0;f<3;f++){
        printf("%d ",a[f]);
    }
    printf("\nThe values store into the array in reverse are: ");
    for(f=2;f>=0;f--){
        printf("%d ",a[f]);
    }
 return 0;
}
