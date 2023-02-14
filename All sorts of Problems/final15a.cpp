#include<stdio.h>
#include<string.h>
int main() {
int d;
char str1[30]= "Programming";
char str2[30]= "programming Language";
char str3[30]= "PROGRAMMING";
char str4[30];
d=strcmp(str1,str2);
if (d==0)
printf ("Both String are same \n");
puts(strlwr(str1));
puts(strupr(str2));
//puts(strlen(str1));
//puts(strlen(str2));
strcpy(str4,str2);
puts(str4);
d=strcmp(str1,str3);
if (d==0)
printf("you have successfully complete the program");
puts(strrev(str2));
return 0;
}
