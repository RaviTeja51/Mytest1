#include<stdio.h>
#include<stdlib.h>

int colatz(int , int);
int main(int argc,char *argv[])
 {
    int n = atoi(*(argv + 1));
    int a = 0,c;
    if(n == 1)
    printf("no steps are involved");
    else
      {
        c = colatz(n,a);
        printf("The number of steps involved are %d" ,c);
      } 
}
int colatz(int n,int a)
 {
     if(n == 1)
      {
       a = 0;
       return a;
      }      

     else
       {
            if(n % 2 == 0)
            {   a = colatz(n/2, a);
                return a + 1;
            } 
            else
            {   a = colatz(3*n + 1,a);
                return a + 1;
            }
       }
 } 

