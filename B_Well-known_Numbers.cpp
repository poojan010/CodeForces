#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    int s,k; cin >> s >> k;

    vector<ll> fib(100000);

    fib[1] = 1;

    int i = 1;
    
    while(true){
        if(fib[i] > s) break;
        i++;
        for(int j = max(1,i-k); j<i; ++j) fib[i] += fib[j];
    }

    vector<int> ans = {0};
    for(int j = i; j >= 1; --j){
        if(fib[j] > s) continue;
        s -= fib[j];
        ans.push_back(fib[j]);
    }

    cout << ans.size() << "\n";
    for(int num : ans) cout << num << " ";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}