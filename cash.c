#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{   float change;
    do
    {
       change = get_float("Change Owed:");
    }
    while(change<=0);
    int coins = round(change * 100);
    int count = 0;
    
    
        while(coins >= 25)
        {
            count++;
            coins = coins-25;
        }
        while(coins>=10)
        {
            count++;
            coins = coins-10;
        }
        while(coins >= 5)
        {
            count++;
            coins = coins-5;
        }
       while(coins >= 1)
       {
           count++;
           coins = coins-1;
           
       }        
   printf("\n%i\n",count); 
    
}

