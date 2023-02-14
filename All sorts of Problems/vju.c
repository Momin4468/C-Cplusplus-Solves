#include<stdio.h>
#include<string.h>
#define max 100000

int main()
{
    int i,just,cnt;
    char ch,w[max];
    while(gets(w))
    {
        i = 0;
        cnt=0;
        just=0;
        while((ch=w[i]) != '\0')
        {

            if(((ch>='a' && ch<='z') || ( ch>='A' && ch<='Z')))  just=1;

           else if(just == 1 && ch == ' ')
            {
                    cnt++;
                    just=0;

            }
           i++;
        }
        if(ch=='\0' && just==1) cnt++;

        printf("%d\n",cnt);
    }
    return 0;
}
