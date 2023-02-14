#include<stdio.h>
int main()
{
    int i,j,n,x,m,k,A[100],B[100],New[200],I;


    printf("***Enter Array Elements in a sorted way***\n\n");

    printf("Enter Size for Array 1: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n" ,n+1);
    for(I=0;I<=n;I++){
        scanf("%d", &A[I]);
    }

    printf("Enter Size for Array 2: ");
    scanf("%d", &m);

    printf("Enter %d elements:\n" ,m+1);
    for(I=0;I<=m;I++){
        scanf("%d", &B[I]);
    }


    i=0;j=0,k=0;
    while(i<=n && j<=n){
        if(A[i]<B[j]){
            New[k] = A[i];
            i++;
            k++;
        }
        else{
            New[k] = B[j];
            j++;
            k++;
        }
    }



        if(i>n){

            for(x = j; x<=m; x++){
                New[k] = B[x];
                k++;
            }
        }
        else{

            for(x = i; x<=n; x++){
                New[k] = A[x];
                k++;
            }
        }

     k = m+n+2;
     printf("\n\n");
     printf("The merged array is: \n");
     for(i=0;i<k;i++){
        printf("%d  ", New[i]);
     }

    return 0;
}
