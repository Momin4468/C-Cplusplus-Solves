#include <stdlib.h>
#include <string.h>
#include<windows.h>

struct Question {
   int serial;
   char name[2000];
   char option[200];
};


int main () {


   FILE *of;
   of= fopen ("POLL-01.txt", "w");

   if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }

   struct Question inp1 = {1, "Do you think that todays technology information and cloud computing have a negative and positive effect?","a)Yes   b)No\n"};
   struct Question inp2 = {2, "The Safety of your data in cloud is:","a)weak  b)Normal c) Strong\n"};
   struct Question inp3 = {3, "What type of data do you keep on cloud storage often?","a)Personal  b)Any data\n"};
   struct Question inp4 = {4, "Do you know what cloud computing is?", "a)Yes  b)No\n"};
   struct Question inp5 = {5, "How long have you been using cloud computing?","a)less than a year   b)more than a year\n"};

   fwrite (&inp1, sizeof(struct Question), 1, of);
   fwrite (&inp2, sizeof(struct Question), 1, of);
   fwrite (&inp3, sizeof(struct Question), 1, of);
   fwrite (&inp4, sizeof(struct Question), 1, of);
   fwrite (&inp5, sizeof(struct Question), 1, of);

   if(fwrite != 0)
      printf("Contents to file written successfully !\n");
   else
      printf("Error writing file !\n");
   fclose (of);

   printf("Now let's start the poll.\n");
   Sleep(3000);

   system("CLS");


 //  system("CLS");
   FILE *inf;
   struct Question inp;
   inf = fopen ("POLL-01.txt", "r");
   if (inf == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }

   int i=0;
   char ID[50];
   char arr[5][100];
   printf("\n\nEnter your id number to participate: ");
   scanf("%s",&ID);
   while(fread(&inp, sizeof(struct Question), 1, inf)){
      printf ("%d) %s\n", inp.serial, inp.name);
      printf("  %s\n", inp.option);
      Sleep(4000);
      printf("Type the answer-> ");
      scanf("%s",arr[i]);
      i++;
   }
   fclose (inf);


   of= fopen ("Ans-01.txt", "w");

   if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }

   fwrite(ID, sizeof(ID), 1, of);
   for(i=0;i<5;i++){
   fwrite(arr[i], sizeof(arr[i]), 1, of);
   }
   fclose(of);


   of= fopen ("Ans-01.txt", "r");

   if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }

   for(i=0;i<5;i++){
   fread(&arr[i], sizeof(arr[i]), 1, of);
   }
   fclose(of);


   return 0;

}
