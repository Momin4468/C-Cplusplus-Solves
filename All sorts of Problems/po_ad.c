#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Question {
   int serial;
   char name[2000];
   char option[50];
};
int main () {


   FILE *of;
   of= fopen ("POLL-01_25/04-12:00.txt", "w");

   if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }

   struct Question inp1 = {1, "Ram"};
   struct Question inp2 = {2, "Shyam"};
   struct Question inp3 = {3, "Ram"};
   struct Question inp4 = {4, "Shyam"};
   struct Question inp5 = {5, "Ram"};

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


   FILE *inf;
   struct Question inp;
   inf = fopen ("POLL-01_25/04-12:00.txt", "r");
   if (inf == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   while(fread(&inp, sizeof(struct Question), 1, inf))
      printf ("roll_no = %d name = %s\n", inp.roll_no, inp.name);
   fclose (inf);

}
