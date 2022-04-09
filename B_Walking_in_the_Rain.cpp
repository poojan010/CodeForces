#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i+=1) cin >> arr[i];

    if(n == 1){
        cout << arr[0]; return;
    }
    if(n == 2 ){
        cout << min(arr[0],arr[1]); return;
    }
    int ans = min(arr[0],arr[n-1]);

    for(int i=1; i< n-2; i++){
        int t = max(arr[i],arr[i+1]);
        ans = min(ans,t);
    }

    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
