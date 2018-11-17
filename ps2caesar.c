#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
int main(int argc,char  *argv[])
{   
    int c;
    if (argc==0)
    {
        printf("Usage: ./caesar key\n");
        
        
    }
    else if(argc>=1)
    {  
        if((atoi(argv[1]))>0)
           {
               
           }
           else
           {
                printf("Usage: ./caesar key\n");
               
           }
    
   }
    string text = get_string("plain text : ");
    int k = strlen(text);
    for(int i = 0;i < k; i++)
    {   if(isalpha(text[i]) != 0)
          {
              c = text[i] + atoi(argv[1]);
              if(c > 90 && text[i] <= 90)
                 {
                      c = c - 90;
                      c = c + 64;
                  }
               else if(c > 122 && text[i] <= 122)
               {
                   c = c - 122;
                   c = c + 96;
               }
              text[i] = c;
          }
    }
    printf("cipher text:%s\n",text);
    
}   


