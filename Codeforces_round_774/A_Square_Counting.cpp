#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll n,s; cin >> n >>s;

    if(s == 0 && n > 0) {
        cout << 0 ;
        return;
    }
    else if(n == 0){
        cout << 1;
        return;
    }

    cout << s/(n*n);

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    ll t; cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }
    
    return 0;
}
