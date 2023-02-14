#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>
#include<conio.h>

// a struct to read and write
struct solar {
    int id;
    char pname[100];
    char spname[100];
    int days;
    char vol[1000];
    char note[2000];
};

int main ()
{
    FILE *outfile1;

    // open file for writing
    outfile1 = fopen ("solar.txt", "w");
    if (outfile1 == NULL)
    {
        fprintf(stderr, "\nError opend file\n");
        exit (1);
    }

    struct solar input1 = {1, "Mercury", "None.", 88, "0.056xEarth", "Smallest Planet of all."};
    struct solar input2 = {2, "Venus", "None.", 225, "0.866xEarth", "Sun Rises in west and sets in east."};
    struct solar input3 = {3, "Earth", "1.", 365, "1.083x10^12", "The only astronomical object to harbor life."};
    struct solar input4 = {4, "Mars", "2.",687, "0.151xEarth", "Often Known as the Red Planet."};
    struct solar input5 = {5, "Jupiter", "79.", 4332, "1321xEarth", "Largest planet of all, also known as Gas Giant."};
    struct solar input6 = {6, "Saturn", "62.", 10759, "763.9xEarth","Second largest planet and the other Gas Giant."};
    struct solar input7 = {7, "Uranus", "27.", 30689, "630.86xEarth","Known as Ice Giant (Larger of two)."};
    struct solar input8 = {8, "Neptune", "14.", 60182, "577.4xEarth","Known as Ice Giant, farthest planet from Sun."};


    // write struct to file
    fwrite (&input1, sizeof(struct solar), 1, outfile1);
    fwrite (&input2, sizeof(struct solar), 1, outfile1);
    fwrite (&input3, sizeof(struct solar), 1, outfile1);
    fwrite (&input4, sizeof(struct solar), 1, outfile1);
    fwrite (&input5, sizeof(struct solar), 1, outfile1);
    fwrite (&input6, sizeof(struct solar), 1, outfile1);
    fwrite (&input7, sizeof(struct solar), 1, outfile1);
    fwrite (&input8, sizeof(struct solar), 1, outfile1);

    if(fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");

    // close file
    fclose (outfile1);
    Sleep(1500);
    system("CLS");

    system("color 9F");
    printf("\t\t  Welcome to my program.\n");
    printf("\tThis program will show some of information of our Solar System.\n\n");

    printf("The name of our solar system: Milky Way Galaxy.\n");
    printf("The center star of Galaxy: Sun.\n");
    printf("The sun is nearly 4.6 Billion Years\n");
    printf("The sun is 1.3Million times larger than Earth.\n");
    printf("There are Eight Planets orbiting the sun.\n");
    printf("Here is some data about the planets.\n\n\n");
    getch();





    FILE *inf;
   struct solar input;
   inf = fopen ("solar.txt", "r");
   if (inf == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }

    printf("Sl   Planet's Name  Sub-Planets\tYear's days  Volume\t        Interesting Facts \n");
    printf("--   -------------  -----------\t-----------  ------\t        ------------------\n\n");

    while(fread(&input, sizeof(struct solar), 1, inf)){
      printf ("%d.   %s\t      %s\t%dD\t     %s \t%s\n\n", input.id, input.pname, input.spname, input.days, input.vol, input.note);
      Sleep(500);
    }

    printf("\nThat was in short our Milky Way Galaxy.\n");
    printf("   Thank You. Developed By Hafiz.\n\n");
    Sleep(1000);
    getch();

    return 0;
}
