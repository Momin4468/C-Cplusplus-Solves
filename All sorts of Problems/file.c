#include <stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()

{ int n; FILE *fptr;
fptr=fopen("C:\\program22.txt","w");
if(fptr==NULL)

{ printf("Error!");

exit(1); }

printf("Enter n: ");

scanf("%d",&n);

fprintf(fptr,"%d",n);

fclose(fptr);


fptr=fopen("C:\\program22.txt","r");
if(fptr==NULL)

{ printf("Error! opening file");

exit(1);

 }

fscanf(fptr,"%d",&n);

printf("Value of n=%d",n);

fclose(fptr);

return 0;
}
