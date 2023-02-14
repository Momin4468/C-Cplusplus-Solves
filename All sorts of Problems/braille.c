#include<stdio.h>
#include<string.h>
int main()
{
 char *alphabet[500]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                    "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
     "...-",".--","-..-","-.--","--.."};
 char *number[500]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};

 int i;
 char str[1000],str1[1000];
 printf("Enter something\n");
 gets(str);
 i=0;
  while(str[i]!='\0')
  {
 if(str[i]!=' '&&(!isdigit(str[i])))
 {
     printf("%s ",alphabet[toupper(str[i])-65]);
 }
    if(str[i]==' ')
    {
     printf(" ");
    }
    if(isdigit(str[i])&&str[i]!=' ')
    {
      printf("%s ",number[str[i]-48]);
    }

   i++;
  }
  printf("\n");

}


