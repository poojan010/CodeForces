#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll mod = 10e9+7;

void solve(){

    ll n,k; cin >> n >> k;

    ll minVal = INT_MAX, maxVal = INT_MIN;
    vector<ll> piles(n);
    for(ll i=0; i<n; i++) {
        cin >> piles[i];
        minVal = min(minVal,piles[i]);
        maxVal = max(maxVal,piles[i]);
    } 
    
    // if difference is greate than colors 
    // then solution is not possible.
    if((maxVal-minVal)>k) cout << "NO";
    else{
        cout << "YES" << "\n";
        for (int i = 0; i < n; i++)
        {
            ll color = 1;
            for (int j = 0; j < piles[i]; j++)
            {
                // we will color first m pebbles with color 1
                // m is minVal
                // other pebbles will be assigned incrementing values
                // so color diff will be only 1 or 0
                if(j>minVal) color++;
                cout << color << " ";
            }
            cout << "\n";
        }
    }
    
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
    
    return 0;
}
