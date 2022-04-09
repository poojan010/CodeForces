#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    string str; cin >> str;
    ll n = str.length();
    ll ans = 0;

    ll t = -1;
    bool flag = false;
    int i;
    for(i=0; i<n-1; ++i){
        if(!flag){
            if(str[i] == str[i+1]) ++i;
            else t = i, flag = true;
        }else{
            if(str[i] == str[t]){
                flag = false;
                ans += (i - (t+1));
            }
            else if(str[i] == str[i+1]){
                flag = false;
                ans += (i - t);
                ++i;
            }
        }
    }

    if(flag) ans += (n-t);
    else if(i == n-1) ++ans;

    cout << ans << "\n";
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
