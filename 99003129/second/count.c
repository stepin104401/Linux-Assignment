#include <stdio.h>
#define MAX_LEN 1024
 
int main() 
{
 
  char ch;
  int charcount = 0, wordcount = 0, linecount = 0;
  int in_word = 0;
  char filename[MAX_LEN];
  FILE *fp;
 
  printf("Enter a file name: ");
  scanf("%s", filename);
 
  fp = fopen(filename, "r");
 
  if(fp == NULL) 
  {
    printf("Could not open the file %s\n", filename);
    return 1;
  }
 
  while ((ch = fgetc(fp)) != EOF) 
  {
    charcount++;
 
    if(ch == ' ' || ch == '\t' || ch == '\0' || ch == '\n') 
    {
      if (in_word) 
      {
        in_word = 0;
        wordcount++;
      }
 
      if(ch = '\0' || ch == '\n') linecount++;
 
    } 
    else 
    {
      in_word = 1;
    }
  }
   printf(" %d  %d %d %s\n",linecount,wordcount,charcount,filename);
   return 0;
}
