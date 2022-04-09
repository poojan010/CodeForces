// ai and aj we set ai = aj = |ai - aj|
// so optimally values should be x and 3x
// so init sum = 4x
// if we set values |x-3x| and |3x-x|
// so values are 2x 2x
// so final sum = 4x

// so values should be
// x 3x 9x 27x 81x ...
// 3^19 is beyond limit
// so n > 19 then ans not possible.

#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll n; cin >> n;

    if(n > 19){
        cout << "NO" << "\n";
        return;
    }

    vector<ll> ans(n);
    cout << "YES" << "\n";
    for(int i=0; i<n; i++){
        ans[i] = pow(3,i);
        cout << ans[i] << " ";
    }
    cout << "\n";

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
