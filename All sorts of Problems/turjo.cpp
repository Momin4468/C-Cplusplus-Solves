#include<stdio.h>
struct person
{
    char n[50],a[50],e[50];
}person;
int main()
{
    scanf("%s %s %s", &person.n, &person.a, &person.e);
    printf("name: %s\n", person.n);
    printf("address: %s\n", person.a);
    printf("number: %s\n",person.e);
    return 0;
}
