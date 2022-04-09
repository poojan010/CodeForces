#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll a,b; cin >> a >> b;
    if(a == 0){
        cout << 1;
    }
    else{
        cout << a + 2*b + 1;
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
