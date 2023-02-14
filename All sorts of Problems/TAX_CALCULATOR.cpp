#include<stdio.h>
#include<string.h>
#include<math.h>

struct sample
{
    char f_name[15],m_name[15],l_name[15];
    char p_H[50], p_R[50], p_P[50],p_D[50];
    char pa_H[50], pa_R[50], pa_P[50],pa_D[50];
    int p_PC[4], pa_PC[4];
    char mob[14],NID[50],occ[50];
    double bsal,nbon,efbon,eabon,bbal;
    double ha,ma,ea;
    double ios,ihp,finc;
    double he,me,ee;

};


int main()
{


    int n,i;
    int j=0,k=9999, cou=0;
    int ja=0,ka=9999;
    double tinc=0.00,texp=0.00;

    printf("ENTER NO. OF CLINT: ");
    scanf("%d",&n);
    printf("\n\n\n");

    double bi[n];
    double ininc[n],inexp[n],inhv[n];

    sample st[n];

    printf("\nN/B: DO NOT USE SPACE. USE BACK SLASH ( _ )\n");

    for (i=0;i<n;i++)
    {
        printf("***CLINT %d\n\n",i+1);
        printf("_____________________________________________________________________________________________________________");
        printf("\n");
        printf("TAX ID.:00%dBANTAX00%d00",++j,k--);
        printf("\n\t->BASIC INFO\n");

        printf("\t\tFIRST NAME                      : ");
        scanf("%s",&st[i].f_name);
        printf("\t\tMIDDLE NAME(USE {.} IF IT'S N/A): ");
        scanf("%s",&st[i].m_name);
        printf("\t\tLAST NAME                       : ");
        scanf("%s",&st[i].l_name);
        printf("\t\tENTER MOBILE NO.                : ");
        scanf("%s",&st[i].mob);
        printf("\t\tENTER NID NO.                   : ");
        scanf("%s",&st[i].NID);
        printf("\t\tPRESENT ADDRESS-\n");
        printf("\t\t\t HOME: ");
        scanf("%s",&st[i].p_H);
        printf("\t\t\t ROAD: ");
        scanf("%s",&st[i].p_R);
        printf("\t\t\t POLICE STATION: ");
        scanf("%s",&st[i].p_P);
        printf("\t\t\t DISTRICT: ");
        scanf("%s",&st[i].p_D);
        printf("\t\t\t POSTAL CODE: ");
        scanf("%s",&st[i].p_P);
        printf("\t\tPARMANENT ADDRESS-\n");
        printf("\t\t\t HOME: ");
        scanf("%s",&st[i].pa_H);
        printf("\t\t\t ROAD: ");
        scanf("%s",&st[i].pa_R);
        printf("\t\t\t POLICE STATION: ");
        scanf("%s",&st[i].pa_P);
        printf("\t\t\t DISTRICT: ");
        scanf("%s",&st[i].pa_D);
        printf("\t\t\t POSTAL CODE: ");
        scanf("%s",&st[i].pa_P);
        printf("\t\tENTER OCCUPATION: ");
        scanf("%s",&st[i].occ);

        printf("\n\t->INCOME STATEMENT\n");
        printf("\t\tBESIC SALARY (PER MONTH): ");
        scanf("%lf",&st[i].bsal);
        printf("\t\tBONUS: \n");
        printf("\t\t\tNOBOBARSHA BONUS: ");
        scanf("%lf",&st[i].nbon);
        printf("\t\t\tEID-UL FITTRE BONUS: ");
        scanf("%lf",&st[i].efbon);
        printf("\t\t\tEID-UL ADHA BONUS: ");
        scanf("%lf",&st[i].eabon);
        printf("\t\t\tTOTAL BONUS      : %.2lf",st[i].nbon+st[i].efbon+st[i].eabon);
        printf("\n");

        printf("\t->ALLOWANCE (PER MONTH)\n ");
        printf("\t\tENTER HOME ALLOWANCE: ");
        scanf("%lf",&st[i].ha);
        printf("\t\tENTER EDUCATION ALLOWANCE: ");
        scanf("%lf",&st[i].ea);
        printf("\t\tENTER MEDICAL ALLOWANCE: ");
        scanf("%lf",&st[i].ma);

        printf("\t->BANK STATEMENT");
        printf("\n");
        printf("\t\tENTER BANK BALACE: ");
        scanf("%lf",&st[i].bbal);
        printf("\t\t\t#ANNUAL BONUS: %.2lf",(st[i].bbal*.08)*12);
        printf("\n");

        printf("\t->ENTER FOREIGN INCOME: ");
        scanf("%lf",&st[i].finc);

        printf("\t->ENTER INTERENCE ON SECURITY: ");
        scanf("%lf",&st[i].ios);

        printf("\t->ENTER INCOME FOR HOUSE PROPERTY: ");
        scanf("%lf",&st[i].ihp);

        printf("\n");
        printf("\t->EXPENSE\n");
        printf("\t\tENTER HOME EXPENSE (PER MONTH): ");
        scanf("%lf",&st[i].he);

        printf("\t\tENTER ANUAL MEDICAL EXPENSE: ");
        scanf("%lf",&st[i].me);

        printf("\t\tENTER EDUCATION EXPENSE (PER MONTH): ");
        scanf("%lf",&st[i].ee);
        printf("\n");
        printf("_____________________________________________________________________________________________________________\n");

        ///income calculation
        ininc[i]=tinc+(st[i].bsal*12)+st[i].nbon+st[i].efbon+st[i].eabon+st[i].bbal+((st[i].bbal*.08)*12)+st[i].finc+st[i].ios+st[i].ihp+
                 ((st[i].ma+st[i].ea+st[i].ha)*12);

        ///expense calculation
        inexp[i]=((st[i].he*12)+st[i].me+(st[i].ee*12));

        ///inventory
        inhv[i]=ininc[i]-inexp[i];
    }

    printf("\n\n\nTAX DATA:\n");

    printf("\nAT 'TAX_LIST.txt'\n");

    freopen("tax_document.txt","w",stdout);
    for (i=0;i<n;i++)
    {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n");
        printf("CLINT: %d",++cou);
        printf("\nTAX ID.:00%dBANTAX00%d00",++ja,ka--);
        printf("\n\nNAME: %s, %s %s",st[i].l_name,st[i].f_name,st[i].m_name);
        printf("\nCONTACT: %s",st[i].mob);
        printf("\nNID: %s",st[i].NID);
        printf("\nPRESENT ADDRESS : %s, %s, %s, %s-%s",st[i].p_H,st[i].p_R,st[i].p_P,st[i].p_D,st[i].p_P);
        printf("\nPARMANENT ADDRESS : %s, %s, %s, %s-%s",st[i].pa_H,st[i].pa_R,st[i].pa_P,st[i].pa_D,st[i].pa_P);
        printf("\nOCCUPATION: %s",st[i].occ);
        printf("\n\n\n");
        printf("TOTAL INCOME (YEARLY) : %.2lf",ininc[i]);
        printf("\nTOTAL EXPENSE (YEARLY): %.2lf",inexp[i]);
        printf("\n              ________________________\n");
        printf("\t\t\t%.2lf\n",inhv[i]);

        ///tax status
        printf("\n\nSTATUS: ");
        if(inhv[i]>=1000000)
        {
            printf("TAXABLE ");
            printf("%\n");
            printf("->TAX: %.2lf",inhv[i]*.10);
        }

        else if(inhv[i]==0||inhv[i]<0)
        {
            printf("SOMETHING WRONG.");
        }

        else
        {
            printf("NOT TAXABLE )\n");
        }
        printf("\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    }

    printf("\n___________________________________END____________________________________________________________________");

    printf("\n\n\n");

   return 0;
}
