#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n;
    do
    {
        
         n =get_int("height: ");
        
    }
    while(n<0 || n >8);
   for(int i =1;i<=n;i++)
   {
       for(int j =n;j>i;j--)
       {
           printf(" ");
       }//prints the pattern
       for(int k = 1;k<=i;i++)
       {
           printf("#");
       }
       printf("  ");
       for(int k = 1;k<=i;i++)
       {
           printf("#");
       }
       printf("\n");
   }
}  
       
   

