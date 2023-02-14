#include<stdio.h>
#include<math.h>
int N = 163850, status[163850];

int main() {

    int i, j, sqrtN,k,prime[15001];

    for( i = 2,k=0; i <= N; i++){
       status[k] = 0;
       k++;
    }

    sqrtN = (int)( sqrt((double)N) );
    for( i = 3; i <= sqrtN; i += 2 ) {
        if( status[i] == 0 ) {
            for( j = i * i; j <= N; j += i + i )
                status[j] = 1;
        }
    }

    prime[0] = 2;
    k=1;
    for( i = 3; i <= N; i += 2 ) {
        if( status[i] == 0 ){
            prime[k] = i;
            k++;
        }
    }

    int test,num;

    scanf("%d", &test);
    for(i=1;i<=test;i++){
        scanf("%d", &num);
        printf("%d\n",prime[num-1]);
    }
    return 0;

}

//http://lightoj.com/article_show.php?article=1001
