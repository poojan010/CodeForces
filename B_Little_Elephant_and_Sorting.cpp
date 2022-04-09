// array is sorted 
// if num[i] >= (maximum value found upto ith index)
// so when we found num[i] < maxVal
// then we add difference in ans, and update maxVal
// instead of updating all following values from i
// we store differences in variable ans.

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll n; cin >> n;
    
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    ll ans = 0;
    ll maxVal = arr[0];
    
    for(int i=1; i<n; i++){

        ll num = arr[i] + ans;
        
        if(num >= maxVal) maxVal = num;
        else{
            ll t = maxVal - num;
            ans += t;
        }
    
    }

    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
