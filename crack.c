#define _XOPEN_SOURCE
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *key = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char word[6];
char salt[3];
char *hash = NULL;

int main(int argc,char *argv[])
{
    if(argc != 2)
    {
        printf("Usage:./crack hash");
        return 1;
    }
    //generates 1 character password
    else
    {   int l = strlen(key);
        salt[0] = argv[1][0];
     salt[1] =argv[1][1];
     salt[2] ='\0';
        //genarates a single character password 
        for(int i = 0;i < l;i++)
        {
            word[0] = key[i];
            word[1] = '\0';
            hash = crypt(word,salt);
            if(strcmp(hash,argv[1])==0)
            {
                printf("%s\n",word);
                return 0;
            }
        }
     //generates  2 character password.
     for(int i =0;i<l;i++)
     {
         word[0] = key[i];
         for(int j = 0;j<l;j++)
         {
             word[1] = key[j];
             word[2] = '\0';
             hash = crypt(word,salt);
             if(strcmp(hash,argv[1])==0)
             {
                 printf("%s/n",word);
                 return  0 ;
             }
         }
     }
     //generates  a 3 character password
     for(int i = 0;i<l;i++)
     {
         word[0] = key[i];
         for(int j =0;j<l;j++)
         {
             word[1] = key[j];
             for(int k =0;k<l;k++)
             {
                 word[2] = key[k];
                 word[3] ='\0';
                 hash = crypt(word,salt);
                 if(strcmp(hash,argv[1])==0)
                 {
                     printf("%s\n",word);
                     return 0;
                     
                 }
             }
         }
     }
     //generates a 4 character password
     for(int  i = 0;i<l;i++)
     {
        word[0] = key[i];
         for(int j = 0;j<l;j++)
         {
             word[1] = key[j];
             for(int k = 0;k<l;k++)
             {
                 word[2] = key[k];
                 for(int m = 0;m<l;m++)
                 {
                     word[3] = key[m];
                     word[4] = '\0';
                     hash = crypt(word,salt);
                     if(strcmp(hash,argv[1])==0)
                     {
                         printf("%s\n",word);
                         
                     }
                 }
             }
         }
     }
     //generates a 5 charcter password
     for(int i = 0;i<l;i++)
     {
         word[0] = key[i];
         for(int j =0 ;j<l;j++)
         {
             word[1] = key[j];
             for(int k = 0;k<l;k++)
             {
                 word[2] = key[k];
                 for(int m = 0;m<l;m++)
                 {
                     word[3] = key[m];
                     for(int n = 0;n<l;n++)
                     {
                         word[4] = key[n];
                         word[5] = '\0';
                         hash = crypt(word,salt);
                         if(strcmp(hash,argv[1])==0)
                         {
                             printf("%s\n",word);
                             return 0;
                         }
                     }
                     
                 
                 }
             }
         }
     }
    }
    
}

