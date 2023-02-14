#include<bits/stdc++.h>
#define case(res) printf("Case %d: %d\n", i, res)
#define PI acos(-1)
#define lli long long int
#define loop(a, n, x) for(int i=a; i<=n; i+=x)
#define npoint(x) fixed << setprecision(x)

using namespace std;
int main(){
    int day=0;
    double height_of_well, climb_dist, slide_down, fatigue;
    double initial_height=0.0, distance_climbed, HA_climbing, HA_sliding;

    cin >> height_of_well >> climb_dist >> slide_down >> fatigue;

    int s_flag=0;
    distance_climbed=climb_dist;
    double fati = (distance_climbed*(fatigue/100.00));
    for(int i=1; ; ){
        day++;
        HA_climbing=initial_height+distance_climbed;
        if(HA_climbing>=height_of_well){
            s_flag = 1;
            break;
        }
        HA_sliding=HA_climbing-slide_down;
        if(HA_sliding<0){
            s_flag=0;
            break;
        }
        initial_height=HA_sliding;
        printf("Day=%d, Initial height=%lf, distance climbed=%lf, HA climbing= %lf, HA sliding= %lf\n", day, initial_height, distance_climbed, HA_climbing, HA_sliding);
        distance_climbed=distance_climbed-fati;
    }
    if(s_flag) cout << "success on day " << day << endl;
    else cout << "failure on day " << day << endl;

    return 0;
}
