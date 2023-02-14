#include<stdio.h>
int main()
{

    int t,exp,str,intel,i,k,j,cnt,round,s,in;

    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d", &str, &intel, &exp);
        j = exp;
        k = 0;
        cnt=0;
        round = 1;
        while(1){
            if(j==0 && round==1){

                if(str>intel) printf("1\n");
                else printf("0\n");
                break;
            }
            s = str + j;
            in = intel + k;
            if(s>in) cnt++;

            if(round==1&&s<=in){
                printf("0\n");
                break;
            }
            if(j!=-1){
               j--;
               k++;
            }
            if(j==-1){
                printf("%d\n",cnt);
                break;
            }
            round++;
        }

    }
    return 0;
}
