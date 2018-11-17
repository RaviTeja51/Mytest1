#include <cs50.h>
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int shift(char);

int main(int argc, string argv[])
{
   if(argc == 1)
   {
       printf("Usage: ./vigenere keyword\n");
       exit(0);
       
   }
   else if(argc>2)
   {
      printf("Usage: ./vigenere keyword\n");
       exit(0);
   }
    else
    {
        if(isdigit(atoi(argv[1]))!=0)
        {
            printf("Usage: ./vigenre keyword\n");
            exit(0);
        }
    }
    
   string text = get_string("plaintext:");
   int len = strlen(text);
   int klen = strlen(argv[1]);
   int j = 0,c;                        
                            
   for(int i = 0;i < len;i++)
       {
           if(isalpha(text[i])!=0)
       {
           if(j <= klen- 1)
           {
               c = text[i] + shift(argv[1][j]);
               j++;
           }
           else
           {
               j = 0;
               c = text[i] + shift(argv[1][j]);
           }
            if(c > 90 && text[i] < 97)
            {
                c = 64 + (c - 90);
                
            }
            else if(c > 122 && text[i] >= 97)
                    {
                        c = 96 + (c - 122);
                    }
               
       }
               text[i] = c;
       }
    
       
                            printf( "ciphertext:%s\n", text);
}

int shift(char c)
{
    return(tolower(c)-97);
                                
}
                            
                            
                            

