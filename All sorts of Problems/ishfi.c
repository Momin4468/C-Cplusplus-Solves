#include<stdio.h>
#include<string.h>

int main()
{

    char str1[100];
    scanf("%s", str);
    int l,i;
    l = strlen(str);
    for(i=l-1;i>=0;i--){
        if(str[i]=='0'){
            str[i] = '\0';
        }
        else break;
    }
    int l1,flag;
    l1 = strlen(str);
    flag=0;
    for(i=0;i<l1;i++){
        if(str[i] != str[l1-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag) printf("NO\n");
    else printf("YES\n");
    return 0;
}
