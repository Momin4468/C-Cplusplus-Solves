#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
    char a[10],b[10],c[10] = "Hajj",d[10] = "Umrah", e[10] = "*";


    int i =1;
 system("color 1F");
    for(;;){
       // system("color 1F");
        gets(a);

        if(strcmp(a,e)==0) break;
        else if (strcmp(a,c)==0) printf("Case %d: Hajj-e-Akbar\n",i);
        else if (strcmp(a,d)==0) printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
     //   Sleep(10000);
        system("CLS");
         system("color 3F");
    }
    return 0;
}
