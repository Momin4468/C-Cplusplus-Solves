#include<stdio.h>
int main()
{
    struct person{
    int serial;
    char nm[100], uni[100], job[100];
    float cgpa,salary;
    }b[5];
    int i, j=0, Max;
    printf("  \n\t\t***A program using Structure and Loop.***\n\n");
    printf("  \t\t\t'Information of 5 persons.'\n\n");
    printf("Enter Serial number, Name of the person, University name, CGPA, Job  and Salary of the person in BDT.\n");
    for(i=0; i<5; i++)
        {
            scanf("%d %s %s %f %s %f", &b[i].serial, &b[i].nm, &b[i].uni, &b[i].cgpa, &b[i].job, &b[i].salary);
        }
    printf("\n\t\t##Required Output is shown below-\n");
    printf("\t\t--------------------------------");
    printf("\n\nSerial\tName\tUniversity\tCGPA\tJob\t  Salary(Tk)\n");
    printf("------\t----\t----------\t----\t---\t  ----------\n");
     for(i=0; i<5; i++)
        {
            printf("  %d\t%s\t   %s\t\t%.2f\t%s\t  %.2f\n", b[i].serial, b[i].nm, b[i].uni, b[i].cgpa, b[i].job, b[i].salary);
        }
   Max=b[0].salary;
    for(i=1; i<5; i++)
    {
        if(Max<b[i].salary)
        {
            Max=b[i].salary;
            j=i;
        }
    }
    printf("\n\n#The person who gets the highest salary is:\n");
    printf("\nSerial\tName\tUniversity\tCGPA\tJob\t  Salary(Tk)\n");
    printf("------\t----\t----------\t----\t---\t  ----------\n");
    printf("  %d\t%s\t   %s\t\t%.2f\t%s\t  %.2f\n", b[j].serial, b[j].nm, b[j].uni, b[j].cgpa, b[j].job, b[j].salary);

    return 0;
}
