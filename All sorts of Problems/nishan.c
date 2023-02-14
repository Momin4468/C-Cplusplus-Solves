#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
    char c[1000];
    FILE *fptr;
    FILE *fptr1;

   fptr = fopen("program1.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter a sentence:\n");
   gets(c);

   fprintf(fptr,"%s", c);
   fclose(fptr);

    fptr = fopen("program2.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter a sentence:\n");
   gets(c);

   fprintf(fptr,"%s", c);
   fclose(fptr);


    fptr = fopen("program3.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter a sentence:\n");
   gets(c);

   fprintf(fptr,"%s", c);
   fclose(fptr);


   fptr1 = fopen("program4.txt","w");
   if(fptr1 == NULL)
   {
      printf("Error!");
      exit(1);
   }



   //Reading mode.
    if ((fptr = fopen("program1.txt", "r")) == NULL)
    {
        printf("Error! opening file 1");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline
    fscanf(fptr,"%[^\n]", c);

    printf("\nData from the file:\n%s\n", c);

    fprintf(fptr1,"%s", c);

    fclose(fptr);

    if ((fptr = fopen("program2.txt", "r")) == NULL)
    {
        printf("Error! opening file 2");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline
    fscanf(fptr,"%[^\n]", c);

    printf("Data from the file:\n%s\n", c);

    fprintf(fptr1,"%s", c);

    fclose(fptr);


    if ((fptr = fopen("program3.txt", "r")) == NULL)
    {
        printf("Error! opening file 3");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline
    fscanf(fptr,"%[^\n]", c);

    printf("Data from the file:\n%s\n", c);

    fprintf(fptr1,"%s", c);

    fclose(fptr);

    fclose(fptr1);


    return 0;
}
