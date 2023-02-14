#include <stdio.h>

int main()
{
    char c = '%';
    double panjabi = 2000;
    double pant = 3000;
    double shoes = 4000;
    double t_shirt = 1500;
    double total = 0, b_kash = 0, vat = 0;

    double q, b;

    printf("Panjabi: ");
    scanf("%lf", &q);
    panjabi = (panjabi * q) * 0.75;

    printf("Pant: ");
    scanf("%lf", &q);
    pant = (pant * q);

    printf("Shoes: ");
    scanf("%lf", &q);
    shoes = (shoes * q) * 0.75;

    printf("T-Shirt: ");
    scanf("%lf", &q);
    t_shirt = (t_shirt * q);

    total = (panjabi + pant + shoes + t_shirt);

    printf("If you used Bkash as payment method.\n");
    printf("You will get instant 30%c cash back.\n", c);
    printf("If you used Bkash press 1: ");

    scanf("%lf", &b);

    if(b == 1){
        b_kash = total * 0.30;
        total = total - b_kash;
    }

    vat = total * 0.15;
    total = total + vat;
    printf("Total: %.2lf\n", total);

    return 0;
}
