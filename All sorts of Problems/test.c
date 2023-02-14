 #include<stdio.h>
#include<string.h>

int main()
{
   char arr[6][100] = { "hello","world", "there","hello","world", "There"},b[10] = "world",c[10] = "There";
   int i,j=0,cnt = 0;
   for(i=0;i<6;i++){

     if(strcmp(arr[i],b)==0){
             printf("Got one\n");
             printf("%s\n", arr[i]);
             j = i+1;
             cnt = 1;
             break;
     }

  }
  for(i=j;i<6;i++){

     if(strcmp(arr[i],c)==0){
             printf("Got two\n");
             printf("%s\n", arr[i]);
             cnt= cnt+2;
             break;
     }

  }

  if(cnt == 0) printf ("No match\n");
  if(cnt == 1) printf("First match\n");
  if(cnt==2) printf("Second match\n");
  if(cnt==3) printf("Both matched\n");

}
