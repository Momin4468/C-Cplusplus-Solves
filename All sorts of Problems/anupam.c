#include<stdio.h>
#include<string.h>

int main(){

    char n[105],m[105];
    scanf("%s", &n);
    int l = strlen(n);
    int i;
    int flag = 0;
    for(i=1;i<l;i++){
        if(n[i]>='a' && n[i]<='z') {
           flag = 1;
           break;
        }
    }
    if(flag)    printf("%s\n",n);
    else{
        if(n[0]>='A' && n[0]<='Z') printf("%s\n",strlwr(n));
        else if(n[0]>='a' && n[0]<='z'){
            strlwr(n);
            n[0] = n[0] - ' ';
            printf("%s\n",n);
        }
    }
    return 0;
}
