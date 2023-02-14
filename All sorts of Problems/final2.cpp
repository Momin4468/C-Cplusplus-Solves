#include<stdio.h>
int A()
{
    int f,m,a;
    scanf("%d%d",&a,&m);
    f= m*a;
    printf("the result %d \n",f);


}
int B()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=(x*x)+(2*x*y)+(y*y);
    printf("the result %d\n",z);

}
int main()
{
     A();
     B();
    return 0;
}
