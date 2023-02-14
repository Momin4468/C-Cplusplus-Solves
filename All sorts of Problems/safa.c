#include<stdio.h>
struct mobile
{
    char b_name[100];
    char model[50];
    float scrn;
    float fcam;
    float bcam;
    char  gpu[15];
    float cpu;
};
int main()
{
    struct mobile q;

    printf("Enter Brand Name\n");
    gets(q.b_name);
    printf("Enter model\n");
    gets(q.model);
    printf("Enter screen size\n");
    scanf("%f",&q.scrn);
    printf("Enter resolution of front camera\n");
    scanf("%f",&q.fcam);
    printf("Enter resolution of back camera\n");
    scanf("%f",&q.bcam);
    printf("Enter Mobile GPU\n");
    scanf("%s",&q.gpu);
    printf("Enter Mobile CPU\n");
    scanf("%f",&q.cpu);

    system ("cls");

    printf("\t**********************************************\n");
    printf("\t\t\tMy Mobile Information\n");
    printf("\t**********************************************\n");
    printf("\t\t\t Brand Name of my mobile : %s\n",q.b_name);
    printf("\t\t\t Model of my mobile : %s\n",q.model);
    printf("\t\t\t Size of my mobile screen  : %f\n",q.scrn);
    printf("\t\t\t front camera resolution : %f\n",q.fcam);
    printf("\t\t\t Back camera resolution: %f\n",q.bcam);
    printf("\t\t\t GPU : %s\n",q.gpu);
    printf("\t\t\t CPU : %f\n",q.cpu);

    system("pause");

    return 0;
}
