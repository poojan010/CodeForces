#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){

    ll n; cin >> n;
    vector<ll> dp(100001);

    for(int i=0; i<n; i++){
        ll num; cin >> num;
        dp[num]++;
    }
    ll incl = 0, excl = 0;

    for(int i=0; i<dp.size(); i++){
        ll notInclude = max(incl,excl);     // this element is not selected
        ll include = excl + dp[i]*i;        // this element is selected
        incl = include, excl = notInclude;
    }

    cout << max(incl,excl);
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
