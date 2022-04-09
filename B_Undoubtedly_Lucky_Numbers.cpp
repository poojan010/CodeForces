#include <bits/stdc++.h>
using namespace std;

#define ll long long int

set<ll> s;

void dfs(int x, int y, ll num, ll n,int cnt){
    // we have to find numbers upto n only so condtion is num > n then return;
    // when num == 0 && cnt != 0 that means leading zero is encounterd
    // so num is 0
    if(num > n || (num == 0 && cnt > 0)) return;
    if(num > 0) s.insert(num);

    dfs(x,y,num*10+x,n,cnt+1);
    dfs(x,y,num*10+y,n,cnt+1);

}

void solve(){
    ll n; cin >> n;

    // We can choose at max 2 numbers 
    // max digits 10 choices 2, below 2 => it can be filled by max 2 digits.
    // so | 2 | 2 | 2 | 2 | 2 | 2 | 2 | 2 | 2 | 2 | <= this is how we can fill 10 digits.
    // 2^10 = 1024 numbers , so bruteforce will work.
    for(int i=0; i<=9; ++i){
        for(int j=i+1; j<=9; ++j){
            dfs(i,j,0,n,0);
        }
    }
    cout << s.size();

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
