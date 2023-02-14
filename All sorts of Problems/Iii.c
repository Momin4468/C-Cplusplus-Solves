#include<stdio.h>
#include<string.h>

int main()
{
  char str[500];
  int l,i,j,k,cnt,flag;
  char index[500];
  while(1){
    scanf("%s", &str);
    if(strcmp(str,"DONE")==0) break;
    l = strlen(str);
    strlwr(str);
    i=0;
    k = 0;
    while(i<l){
        if(str[i]>='a' && str[i]<='z'){
          index[k] = str[i];
          k++;
        }
        i++;
    }
    index[k] = '\0';

    j = k-1;
    flag = 0;
    for(i=0;i<k;i++){
        if(index[i]!=index[j]){
            flag = 1;
            break;
        }
        j--;
    }
    if(flag==0) printf("You won't be eaten!\n");
    else printf("Uh oh..\n");
  }
  return 0;
}
