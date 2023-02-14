#include<stdio.h>


int main()
{
    int i, count,start;
    char ch[100000];
    while(gets(ch))
    {
        count=0;
        start=0;
        i = 0;
        while(ch[i]!='\0')
        {

            if(((ch[i]>='a' && ch[i]<='z') || ( ch[i]>='A' && ch[i]<='Z')))  start=1;
            else
            {
                if(start == 1)
                {
                    count++;
                    start=0;

                }
            }
          i++;
        }
        if(ch[i]=='\0' && start==1) count++;
        printf("%d\n",count);
    }
    return 0;
}
