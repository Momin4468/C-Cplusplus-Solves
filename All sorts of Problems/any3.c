 #include<stdio.h>
 int A(int i, int j);
 int main()
 {
     int a,b,m;
     while(scanf("%d%d",&a,&b)!=EOF){
            m = A(a , b);
            printf("%d %d %d\n",a,b,m);
       }
 }
int A(int i, int j){
    int  d,e = 0,cnt = 1;
      if(i>j){
          int temp = i;
            i = j;
            j = temp;
        }
        while(i <= j){
                d = i;
               while(d!=1){
               if(d%2 != 0) d = 3*d+1;
               else d/=2;
               cnt++;
               if(d == 1) break;
        }
         if(cnt>e) e = cnt;
         i++; cnt = 1;
      }
    return e;
}

