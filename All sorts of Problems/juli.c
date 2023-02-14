#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d,e,k,j=0,f=0;
    char num[7],num2[7];
    char num1[11];
   /* printf("Please enter the number without space or dashes: ");
    scanf("%s", num1);

    for(a = 0, b = 3; a<6; b++, a++){
        num2[a] = num1[b];
    }
    num2[6] = '\0';
    */

    for(a = 0; a<=9; a++){
        num[0] = a + '0';

        for(b = 0; b<=9; b++){
               num[1] = b + '0';

        for(c = 0; c<=9; c++){
               num[2] = c + '0';

        for(d = 0; d<=9; d++){
               num[3] = d + '0';

        for(e = 0; e<=9; e++){
               num[4] = e + '0';

        for(k = 0; k<=9; k++){
                num[5] = k + '0';
                num[6] = '\0';
                printf("050%s6\n",num);
                /*if(strcmp(num,num2)==0) {
                    printf("\n\nYes the number exists\n The number is --> 050%s6\n", num);
                    f = 1;
                    return 0;
                }*/
                j++;
        }
        printf("\n");
        }
        }
        }
        }
    }
    if(f==1) printf("The number is not found.\n");
    printf("count = %d\n\n",j);
}
