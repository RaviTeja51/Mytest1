#include<stdio.h>
void grow(int n,int* a)
{int j,hieght;
    for(int i =0;i<n;i++)
    {   j = 0,hieght =0;
        while(j<=a[i])
        {
            if(j%2 == 0)
                hieght+=1;
            else
                hieght*=2;
            j++;    
        }
     printf("%d\n",hieght);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    grow(n,a);
    
}
