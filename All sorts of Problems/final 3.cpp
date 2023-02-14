#include<stdio.h>
int main()
{
    struct Person{
    char a[100],n[100];
    int ID;
    }P[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%s%d%s", &P[i].a, &P[i].ID, &P[i].n);
    }
    printf("Name\tID\tNationality\n");
    for(i=0;i<=4;i++)
    {
        printf("%s\t%d\t%s\n", P[i].a, P[i].ID, P[i].n);
    }
    return 0;
}
