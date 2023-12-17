#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks[5];
    printf("Enter the marks of English: ");
    scanf("%d",&marks[0]);
        printf("Enter the marks of Math: ");
        scanf("%d",&marks[1]);
            printf("Enter the marks of Physics: ");
            scanf("%d",&marks[2]);
                printf("Enter the marks of GED: ");
                scanf("%d",&marks[3]);
                    printf("Enter the marks of CSE: ");
                    scanf("%d",&marks[4]);
printf("English= %d , Math=%d , Physics=%d , GED = %d , CSE= %d",marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}
