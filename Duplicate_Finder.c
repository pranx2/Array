#include<stdio.h>
int main(int argc, char const *argv[])
{
 int array[3]={5,4,4};
        for (int i = 0; i < 3; i++)//Elements displaying loop;
            {
                printf("Element - %d : %d\n",i,array[i]);
            }
            int i,j,count = 0;
            //Counting duplicate number of array;
              for (i = 0; i < 3; i++)
              {
               for (j = i + 1; j < 3; j++)
               {
                if (array[i] == array[j])//Comparing;
                {
                 //int count = 0;
                 count++;
                 break;
                }
               }
              }
                //Displaying duplicate number of array;
                printf("Total number of duplicate elements found in the array: %d\n",count);
                //Finding Duplicate value;
                int dup;
                  for (i = 0; i < 3; i++)
                 {
                  for (j = i + 1; j < 3; j++)
                  {
                   if (array[i] == array[j])//comparing;
                   {
                     dup = array[j];
                   } 
                  }     
                 }
              //Displaying the duplicate value;
                  printf("The duplicate value is  : %d\n",dup);
                   int uniq;
              //Finding unique value;
                   for ( i = 0; i < 3; i++)
                     {
                       for (j = i +1; j < 3; j++)
                       {
                        //If unique find;
                        if (array[i] != array[j])
                          {
                           for (i = 0; i < 3; i++)
                           {
                                if (dup != array[i])
                                {
                                  uniq = array[i];
                                  printf("The unique value is     : %d\n",uniq);
                                  break;
                                }
                                //break;
                            }
                            break;
                          }
                          //break;
                       }
                       break;
                     }
      //If unique not find;
                  for (i = 0; i < 3; i++)
                 {
                  if (array[0] == array[1] && array[0] == array [2] && array[1] == array[2])
                  {
                  printf("There is no unique value");
                   break;
                  }
                  break;
                 }
 return 0;
}
