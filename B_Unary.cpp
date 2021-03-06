#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

ll mod = 1000003;

void solve(){

    string str; cin >> str;

    ll ans = 0;

    for(char ch : str){
        ans = (ans*16)%mod;
        
        if(ch == '>') ans += 8;
        
        else if(ch == '<') ans += 9;
        
        else if(ch == '+') ans += 10;
        
        else if(ch == '-') ans += 11;
        
        else if(ch == '.') ans += 12;
        
        else if(ch == ',') ans += 13;
        
        else if(ch == '[') ans += 14;
        
        else if(ch == ']') ans += 15;
        
        ans = ans%mod;
    }

    cout << ans%mod;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}