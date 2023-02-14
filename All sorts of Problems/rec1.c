#include<stdio.h>

int call(int m)
{
	if(m>5){
		return 0;
	}
	printf("%d hello\n",m);
	call(m+1);
	printf("%d\n",m);
}
int main()
{
	call(1);
	return 0;
}

