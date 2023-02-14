#include <stdio.h>

int main() {

	int n,k,j;


	scanf("%d",&n);
    int a[n+1];


	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(k=0;k<n-1;k++){
		if(a[k]<=a[k+1])
			break;
	}
	k++;

	for(j=k;j<n-1;j++){
		if(a[j]>=a[j+1])
			break;
	}

	if(j==n-1)
		printf("Yes");
	else
		printf("No");

	return 0;
}
