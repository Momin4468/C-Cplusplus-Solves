#include<stdio.h>

/*-----------------------this is for using text question file -----------------//
char a[100],b,p;
void getquestion()
{
    char *toke;
    char hlp[256];
    FILE *qsfile;
    qsfile = fopen("Q.txt","r");
    fscanf(qsfile,"%s",hlp);
    toke = strtok(hlp,",");
    p=0;
    while(toke!=NULL)
    {
        a[p]=atoi(toke);
        toke =strtok(NULL,",");
        p++;
    }
    b=1;
}
*/




int t[100],n,i;
void getarray()
{
    char *token;
    char help[256];
    FILE *Inputefile;
    Inputefile = fopen("ans.txt","r");
    fscanf(Inputefile,"%s",help);
    token = strtok(help,",");
    i=0;
    while(token!=NULL)
    {
        t[i]=atoi(token);
        token =strtok(NULL,",");
        i++;
    }
    n=1;
}

void quizc()
{
//FILE *ptr;
int i,c[10];
int sc=0;
int w=10;
//char ch[10];
//ptr=fopen("c.txt","a");


//printf("There are 10 Questions \nHow many you want to play?\n");
//scanf("%d",&w);
//clrscr();
for(i=0;i<w;i++)
{
switch(i)
{
case 0:
       printf("\t\t\t\t|-----------|\n");
       printf("\t\t\t\t|Question %d.|\n",i+1);
       printf("\t\t\t\t|-----------|\n");
       printf("How many loops in C\n1) 2       2) 3\n3) 4       4) 5\n");
       scanf("%d",&c[i]);
       if(c[i]==t[0])
       {
       sc=sc+1;
       sc=sc;
       printf("\t\tCorrect\n");

       getch();
       //clrscr();
       }
       else
       {
       printf("\t\t\t\tNot Correct\n");
       printf("\t\t\t\tAnswer=2\n");
       getch();
       //clrscr();
       }
       break;
  case 1:
       printf("\t\t\t\t|-----------|\n");
       printf("\t\t\t\t|Question %d.|\n",i+1);
       printf("\t\t\t\t|-----------|\n");
       printf("C language has been developed by?\n1) Martin Richards       2) Bijarne Stroustrup\n3) Dennis Ritche         4) Ken Thompson\n");
       scanf("%d",&c[i]);
       if(c[i]==t[1])
       {
       sc=sc+1;
       sc=sc;
       printf("\t\t\t\tCorrect\n");

       getch();
       //clrscr();
       }
       else
       {
       printf("\t\t\t\tNot Correct\n");
       printf("\t\t\t\tAnswer=3\n");
       getch();
       //clrscr();
       }
       break;
  case 2:
	  printf("\t\t\t\t|-----------|\n");
       printf("\t\t\t\t|Question %d.|\n",i+1);
       printf("\t\t\t\t|-----------|\n");
       printf("Pointer holds\n1) Value of Varriable       2) Address of variable\n3) Both                     4) Always Null\n");
       scanf("%d",&c[i]);
       if(c[i]==t[2])
       {
       sc=sc+1;
       sc=sc;
       printf("\t\t\t\tCorrect\n");
        printf("\n\t\t press any key.");
       getch();
       //clrscr();
       }
       else
       {
       printf("\t\t\t\tNot Correct\n");
       printf("\t\t\t\tAnswer=2\n");
       getch();
       //clrscr();
       }
       break;
  case 3:
	 printf("\t\t\t\t|-----------|\n");
       printf("\t\t\t\t|Question %d.|\n",i+1);
       printf("\t\t\t\t|-----------|\n");
       printf("To accept 100 different values into the\narray we require\n1) loop       2) If condition\n3) Function   4) Structure\n");
       scanf("%d",&c[i]);
       if(c[i]==t[3])
       {
       sc=sc+1;
       sc=sc;
       printf("\t\t\t\tCorrect\n");
        printf("\n\t\t press any key.");
       getch();
       //clrscr();
       }
       else
       {
       printf("\t\t\t\tNot Correct\n");
       printf("\t\t\t\tAnswer=1\n");
       getch();
       //clrscr();
       }
       break;
  case 4:
	 printf("\t\t\t\t|-----------|\n");
       printf("\t\t\t\t|Question %d.|\n",i+1);
       printf("\t\t\t\t|-----------|\n");
       printf("Which of the foolowing is allowed in\na C Airthmatic Instruction?\n1) []       2) {}\n3) ()       4) None\n");
       scanf("%d",&c[i]);
       if(c[i]==t[4])
       {
       sc=sc+1;
       sc=sc;
       printf("\t\t\t\tCorrect\n");

       getch();
       //clrscr();
       }
       else
       {
       printf("\t\t\t\tNot Correct\n");
       printf("\t\t\t\tAnswer=3\n");
       getch();
       //clrscr();
       }
       break;
  case 5:
	 printf("\t\t\t\t|-----------|\n");
       printf("\t\t\t\t|Question %d.|\n",i+1);
       printf("\t\t\t\t|-----------|\n");
       printf("Array is\n1) Pri. data type       2) Pointer data type\n3) Heteroge. type       4) Homogeno. type\n");
       scanf("%d",&c[i]);
       if(c[i]==t[5])
       {
       sc=sc+1;
       sc=sc;
       printf("\t\t\t\tCorrect\n");
       getch();
       //clrscr();
       }
       else
       {
       printf("\t\t\t\tNot Correct\n");
       printf("\t\t\t\tAnswer=4\n");
       getch();
       //clrscr();
       }
       break;
  case 6:
	 printf("\t\t\t\t|-----------|\n");
       printf("\t\t\t\t|Question %d.|\n",i+1);
       printf("\t\t\t\t|-----------|\n");
       printf("C programs are converted into machine language\nwith the help of?\n1) An Editor       2) A compiler\n3) An oper. Sys.   4) None\n");
       scanf("%d",&c[i]);
       if(c[i]==t[6])
       {
       sc=sc+1;
       sc=sc;
       printf("\t\t\t\tCorrect\n");
       getch();
       //clrscr();
       }
       else
       {
       printf("\t\t\t\tNot Correct\n");
       printf("\t\t\t\tAnswer=2\n");
       getch();
       //clrscr();
       }
       break;
  case 7:
	printf("\t\t\t\t|-----------|\n");
       printf("\t\t\t\t|Question %d.|\n",i+1);
       printf("\t\t\t\t|-----------|\n");
       printf("Float a[15],What is the size of array?\n1) 17       2) 14\n3) 15       4) 16\n");
       scanf("%d",&c[i]);
       if(c[i]==t[7])
       {
       sc=sc+1;
       sc=sc;
       printf("\t\t\t\tCorrect\n");
       getch();
       //clrscr();
       }
       else
       {
       printf("\t\t\t\tNot Correct\n");
       printf("\t\t\t\tAnswer=3\n");
       getch();
       //clrscr();
       }
       break;
  case 8:
	 printf("\t\t\t\t|-----------|\n");
       printf("\t\t\t\t|Question %d.|\n",i+1);
       printf("\t\t\t\t|-----------|\n");
       printf("C can be used on\n1) Only MS-DOS operating system\n2) Only Linux operating system\n3) Only Windows operating system\n4) All of the above\n");
       scanf("%d",&c[i]);
       if(c[i]==t[8])
       {
       sc=sc+1;
       sc=sc;
       printf("\t\t\t\tCorrect\n");
       getch();
       //clrscr();
       }
       else
       {
       printf("\t\t\t\tNot Correct\n");
       printf("\t\t\t\tAnswer=4\n");
       getch();
       //clrscr();
       }
       break;
  case 9:
	  printf("\t\t\t\t|-----------|\n");
       printf("\t\t\t\t|Question %d.|\n",i+1);
       printf("\t\t\t\t|-----------|\n");
       printf("int[]={5,6,7,8,9}\nWhat is the value of a[3]?\n1) 9       2) 8\n3) 7       4) 6\n");
       scanf("%d",&c[i]);
       if(c[i]==t[9])
       {
       sc=sc+1;
       sc=sc;
       printf("\t\t\t\tCorrect\n");
       getch();
       //clrscr();
       }
       else
       {
       printf("\t\t\t\tNot Correct\n");
       printf("\t\t\t\tAnswer=2\n");
       getch();
       //clrscr();
       }
       break;
 }
 }
 printf("your result is=%d out of 10\n",sc);
}
int main()
{

    int choice10;
   // getquestion();
    getarray();
    printf("\t\t\t\t Wlcome to quiz taker\n");
    printf("\t\t\t\t|--------------------|\n");
    printf("\n1) start\n2) Exit\n");
scanf("%d",&choice10);
switch(choice10)
{
case 1: quizc();

	break;

default: break;
}
}
