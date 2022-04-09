#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll n; cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; ++i) cin >> arr[i];

    if(n == 1){
        if(arr[0] > 1) cout << "NO";
        else cout << "YES";
        cout << "\n";
        return;
    }

    sort(arr.begin(), arr.end(), greater<int>()); 

    if(arr[0] - arr[1] <= 1) cout << "YES";
    else cout << "NO";
    
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
