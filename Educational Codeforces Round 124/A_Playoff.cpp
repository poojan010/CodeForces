#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    int n; cin >> n;
    ll ans = pow(2,n) - 1;
    cout << ans << "\n";    // store in variable otehrwise gives wrong answer.
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    ll t; cin >> t;

    while (t--)
    {
        solve();
    }
    
    return 0;
}
