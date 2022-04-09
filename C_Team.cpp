// suppose we have 3 zeros
// to statisfy our condition we can put 1s between zeros
// max 1s we can put bw zeros are 2 and min is 1.
// examle scene - n == m
//  | <- represents 1
// | | |
//  0 0 0 
//  initially we can put ones like this 
//  n-1 == m, m < n-1 => solution not possible.
//   | |
//  0 0 0 
//  m > n, so we can add one more 1(add 1s upto differncw(m-n)) adjacent to 1
// so max string we can achieve is
// 11011011011 => (3+1)*2
// so if m > (n+1)*2 => then solution not possible.

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll n,m; cin >> n >> m;

    if(m < n-1 || m > (n+1)*2){
        cout << -1;
        return;
    }
    
    string str = "";
    for(int i=0; i<n; i++){ 
        str.push_back('1');
        str.push_back('0');
    }
    
    if(m == n-1){
        str.erase(0,1);
        cout << str; 
        return;
    }
    
    int k = m - n;
    string ans;
    for(int i=0; i<str.length(); i++){
        if(i%2 == 0 && k > 0){
            ans.push_back('1');
            k--;
        }
        ans.push_back(str[i]);
    }

    while (k--) ans.push_back('1');
    
    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
