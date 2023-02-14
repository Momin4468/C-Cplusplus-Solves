#include<stdio.h>
int main()
{
    int pa,pan,tis,sho,w,x,y,z,n;
    float dis,gift,t_unit,vat,total;
    printf("panjabi  pant  T-shirt  shoe\n");
    scanf("%d%d%d%d",&pa,&pan,&tis,&sho);
    w=pa*2000;
    x=pan*3000;
    y=tis*1500;
    z=sho*4000;
    total=(w+x+y+z);
    dis= (w*0.75)+(z*0.75)+y+x;
    printf("total purchase = %.2f tk\ndiscount = %.2f tk\n",total,dis);
    printf("if u use bkash press 1\n");
    scanf("%d",&n);
    if(n==1)
    {
        gift=dis*0.30;
        dis=dis-gift;
        printf("gift amount = %.2f tk\n",gift);
    }
    vat=dis*0.15;
    t_unit=dis+vat;
        printf("total unit amount = %.2f tk",t_unit);

    return 0;
}
