#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc, day;
    cin >> tc;
    while(tc--){
        cin >> day;
        int stock[day+2];
        for(int i=0; i<day; i++){
            cin >> stock[i];
            if(stock[i]==0){stock[i]=1;}
        }
        int cnt=0,s=1;
        if(stock[0]<stock[1]) cnt = stock[0];
        for(int i=0; i<day-1; i++){

            if(stock[i]<stock[i+1]){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
