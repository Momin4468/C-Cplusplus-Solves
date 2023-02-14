#include<bits/stdc++.h>
using namespace std;
/// 'N'+'A'+'E'+'E'+'E'+'M' ///
int main()
{

    //freopen("input.txt", "r", stdin);

    int t; scanf("%d", &t); while(t--){
        int n; scanf("%d", &n);
        vector<int> vec;
        unordered_map<int, int> cnt;
        for(int i=1; i<=n; i++){
            int a; scanf("%d", &a);
            vec.push_back(a);
            cnt[a]++;
        }

        int koyta = 0;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i; j<n; j++){
                sum += vec[j];

                if(cnt[sum] > 0 && j-i+1 > 1){
                    koyta += cnt[sum];
                    cnt[sum] = 0;
                }
            }
        }
        printf("%d\n", koyta);
    }

    return 0;
}

