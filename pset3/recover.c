#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>


int main(int argc, char *argv[])
{
if(argc == 0)
  {
     printf("Usage:./recover card.raw");
     return 1;
  }
 char *infile = argv[1];//to remember the file name
 FILE *inptr = fopen(infile,"r");
 FILE *img = NULL;
 int j = 0;
 if(inptr == NULL)
  {
     printf("Memory file %s couldn't be opened\n ",infile);
     return 2;
  }

 unsigned char buffer[512];//stucture to store the jpeg block;
 char name[8];//to store name to each jped file
 int k = 1;//to count the number of images formed
 while(fread(buffer,1,512,inptr)==512)
 {

     if(buffer[0]==0xff && buffer[1]==0xd8 && buffer[2] == 0xff &&(buffer[3] & 0xf0) == 0xe0)//to check the begining of the jpeg
     {

        if(j == 0)
        {
         sprintf(name,"%03i.jpg",k);//to create a name and store it in "name" array
          img = fopen(name,"w");//to open a file with name and give its address of the file
         fwrite(buffer,512 * sizeof(char),1,img);//to copy the jpeg block to file pointed by img
         j = 1;
         k++;//to increment the count of number of image

        }
         else if(j == 1)
        {
         fclose(img);

         sprintf(name,"%03i.jpg",k);
         img = fopen(name,"w");
         fwrite(buffer,512 * sizeof(char),1,img);
         j = 1;
         k++;
        }

     }
     else
     {
        if(j == 0)
        {
            continue;
        }
        else
        {
            fwrite(buffer,512,1,img);
        }
     }
 }
 fclose(img);
 fclose(inptr);
 return 0;


}

