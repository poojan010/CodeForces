#include <bits/stdc++.h>
using namespace std;


void solve(){
    string colors; cin >> colors;
    string pieces; cin >> pieces;

    map<char,int> m1, m2;

    for(char ch : colors) m1[ch]++;
    for(char ch : pieces) m2[ch]++;

    int ans = 0;
    for(auto it : m2){
        char ch = it.first;
        if(m1.find(ch) == m1.end()){
            cout << -1 << "\n";
            return;
        }
        ans += min(it.second,m1[ch]);    
    }

    cout << ans << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}