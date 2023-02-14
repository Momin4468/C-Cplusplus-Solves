#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<conio.h>


void main(){

    FILE *morF;
    morF = fopen("morse.txt","w");
    if(morF == NULL){
        printf("Error!");
        exit(1);
    }
    char in[200];
    char *morse[38]={".-","-...","-.-.","-..",".","..-.","--.",
                    "....","..",".---","-.-",".-..","--","-.",
                    "---",".--.","--.-",".-.","...","-","..-",
                    "...-",".--","-..-","-.--","--..","-----",
                    ".----","..---","...--","....-",".....",
                    "-....","--...","---..","----."," |"};

    char *txt[38]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o",
                   "p","q","r","s","t","u","v","w","x","y","z","0","1","2","3",
                    "4","5","6","7","8","9"," "};
    printf("Enter text: ");
    gets(in);
    printf("\nMorse: ");
    int i,j;
    int len = strlen(in);

    for(j=0; j<len; j++){
        for(i=0; i<38; i++){
            if(in[j] == *txt[i]){
                printf("%s   ", morse[i]);
                fprintf(morF,"%s   ", morse[i]);
                break;
            }
        }
    }
    fprintf(morF,"\0");
    printf("\n\nPrinting Morse code in morse.txt file...\n");
    fclose(morF);



    printf("\n\nHit Enter to read Morse code from file\n");
    char enter = 0;
    while (enter != '\r' && enter != '\n') { enter = getchar(); }

    char mIn[200];
    morF = fopen("morse.txt","r");
    fgets(mIn, 200, morF);
    fclose(morF);
    printf("\nMorse: %s", mIn);


    printf("\n\nHit Enter to convert Morse code to text\n");
    enter = 0;
    while (enter != '\r' && enter != '\n') { enter = getchar(); }

    printf("\nText: ");
    char *line;
    char *token;
    char buf[256];
    for (line = strtok (mIn, "|"); line != NULL;
        line = strtok (line + strlen (line) + 1, "|")){
        strncpy (buf, line, sizeof (buf));
        for (token = strtok (buf, " "); token != NULL;
            token = strtok (token + strlen (token) + 1, " ")){
            for(i=0; i<38; i++){
                if( strcmp(morse[i],token)==0){
                printf("%c", *txt[i]);
                break;
                }
            }
        }
        printf(" ");
    }
    getch();
}
