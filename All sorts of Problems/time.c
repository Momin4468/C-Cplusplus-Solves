#include<stdio.h>
#include<time.h>
int main()
{
    system("color A");
    time_t currentTime;
    time(&currentTime);
    printf("\t\t\t\t\t\t%s\n",ctime(&currentTime));
    return 0;
}
