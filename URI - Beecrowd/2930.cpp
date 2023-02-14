#include<stdio.h>
int main()
{
    int e,d;
    scanf("%d %d", &e, &d);
    if(d<e || d==e) printf("Eu odeio a professora!\n");
    else{
        if((d-e)>=3) printf("Muito bem! Apresenta antes do Natal!\n");
        else{
            printf("Parece o trabalho do meu filho!\n");
            if(d<=22) printf("TCC Apresentado!\n");
            else printf("Fail! Entao eh nataaaaal!\n");
        }
    }
    return 0;
}


