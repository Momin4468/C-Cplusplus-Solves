#include<stdio.h>
double stack[20];
int top = -1;

void push(double x)
{
        stack[++top] = x;
}

double pop()
{
        return stack[top--];
}

int main()
{
        char exp[20];
        char *e;
        double n1,n2,n3,num;
        printf("Enter the expression :: ");
        scanf("%s",exp);
        e = exp;
        while(*e != '\0')
        {
                if(isdigit(*e))
                {
                        num = *e - 48.00;
                        push(num);
                }
                else
                {
                        n1 = pop();
                        n2 = pop();
                        switch(*e)
                        {
                                case '+':
                                {
                                        n3 = n1 + n2;
                    break;
                                }
                                case '-':
                                {
                                        n3 = n2 - n1;
                                        break;
                                }
                                case '*':
                                {
                                        n3 = n1 * n2;
                                        break;
                                }
                                case '/':
                                {
                                        n3 = n2 / (n1*1.0);
                                        break;
                                }
                        }
                        push(n3);
                }
                e++;
        }
        printf("\nThe result of expression %s  =  %lf\n\n",exp,pop());
        return 0;

}
