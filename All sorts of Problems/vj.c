#include<stdio.h>
#include<math.h>

int main()
{
    char ch;
    int cnt = 0;

    while(scanf("%c", &ch) == 1){
    if(ch == '"'){
      cnt++;
      if(cnt %2) printf("``");
      else printf("''");

    }

    else printf("%c",ch);
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    long i,l,p=0;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='"')
            {
                p=p+1;
                if(p%2==1)
                printf("``");
                else
                printf("''");
            }
            else
            printf("%c",s[i]);
        }
        printf("\n");

    }
    return 0;
}
