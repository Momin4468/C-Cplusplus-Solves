#include<stdio.h>
#include<string.h>
int main()
{

    int i,n,v1,v2,j1,j2,v;

    scanf("%d", &n);
    char num1[n+2],num2[n+2];
    scanf("%s", &num1);
    scanf("%s", &num2);
    int cnt = 0;
    for(i=0;i<n;i++){
        v1 = num1[i]-'0';
        v2 = num2[i]-'0';

        if(v2<v1){
            j1 = 0;j2 = 0;
            v = v1;
            while(1){
                v1++;
                if(v1>9) v1 = 0;
                j1++;
                if(v1==v2) break;
            }
            printf("\n#cnt(j1) = %d",j1);
            while(1){
                v--;
                j2++;
                if(v1==v2) break;
            }
            printf("\n#cnt(j2) = %d",j2);
            if(j1==j2) cnt = cnt + j2;
            else if(j1<j2) cnt = cnt+j1;
            else cnt = cnt +j2;
            printf("\n#cnt = %d",cnt);
        }
        else if(v1< v2){
            j1 = 0;j2 = 0;
            v = v1;
            while(1){
                v1++;
                j1++;
                if(v1==v2) break;
            }
            printf("\n#cnt(j1) = %d",j1);
            while(1){
                v--;
                if(v<0) v = 9;
                j2++;
                if(v1==v2) break;
            }
            printf("\n#cnt(j2) = %d",j2);
            if(j1==j2) cnt = cnt + j2;
            else if(j1<j2) cnt = cnt+j1;
            else cnt = cnt +j2;
            printf("\n#cnt = %d",cnt);
        }
    }
    printf("\n\n");
    printf("%d\n",cnt);
    return 0;
}
