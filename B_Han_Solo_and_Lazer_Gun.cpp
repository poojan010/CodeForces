// every line has some slope
// y = mx + c. here m is solpe 
//for each distinct lines it has different slope.
// so we find all lines(bw points - inital and given) 
// points on same lines will be killed in one shot.
// so number of lines will be the answer.

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    double x0,y0; cin >> x0 >> y0;

    map<double,int> mp;

    for(int i=0; i<n; i++){
        double x1,y1; cin >> x1 >> y1;
        
        if(x1-x0 == 0) mp[100000]++;
        else if(y1-y0 == 0) mp[0]++;
        else{
            double m = (y1 - y0)/(x1 - x0);
            mp[m]++;
        }
    }

    cout << mp.size();
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();

    return 0;
}
