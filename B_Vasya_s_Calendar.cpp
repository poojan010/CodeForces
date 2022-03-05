#include <bits/stdc++.h>
using namespace std;

// Vasya will increment timer 
// if months days are shorter than d
// Ex : month day 28 , d = 31
// so vasya has to update timer three times
// this goes for all months.

void solve(){

    int d,n; cin >> d >> n;

    vector<int> month(n);
    for(int i=0; i<n; i++) cin >> month[i]; 

    int ans = 0;

    for(int i=0; i<n-1; i++){
        ans += (d-month[i]);
    }

    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
