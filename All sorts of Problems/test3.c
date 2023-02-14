#include <stdio.h>
#include <string.h>

int main(void){

int i,j,cnt=0;
char board[8][35][4] = {{ "R1 ", "N1 ", "B1 ", "QU ", "KI ", "B2 ", "N2 ", "R2 "},

                   { "P1 ", "P2 ", "P3 ", "P4 ", "P5 ", "P6 ", "P7 ", "P8 "},
                   { " "," "," "," "," "," "," "," "},
                   { " "," "," "," "," "," "," "," "},
                   { " "," "," "," "," "," "," "," "},
                   { " "," "," "," "," "," "," "," "},
                   { "p1 ", "p2 ", "p3 ", "p4 ", "p5 ", "p6 ", "p7 ", "p8" },
                   {"r1 ", "n1 ", "b1 ", "qu ", "ki ", "b2 ", "n2 ", "r2 "}};

                   char b[10];
gets(b);
for(i=0;i<8;i++){
        for(j=0;j<35;j++){

       printf("%s ",board[i][j]);
    }
    for(j=0;j<35;j++){

        if(strcmp(board[i][j],b)==0) cnt++;
    }
  printf("\n");
}
printf("\n");
printf("%d\n",cnt);
}
