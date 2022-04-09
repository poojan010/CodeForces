// brute force approach 
// increment every same rank group's 1 value
// decrement every same rank group's 1 value

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n,k; cin >> n >> k;

    vector<int> arr(n);
    map<int,int> mp;

    for(int i=0; i<n; ++i){ 
        cin >> arr[i];
        ++mp[arr[i]];
    }   

    int ans = 0;
    while(mp[k] != n){
        ++ans;
        vector<int> incr,decr;
        for(auto it : mp){
            int a = it.first, b = it.second;
            if(a == k || b == 0) continue;
            incr.push_back(a+1);
            decr.push_back(a);
        }
        for(int num : incr) ++mp[num];
        for(int num : decr) --mp[num];
    }

    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
