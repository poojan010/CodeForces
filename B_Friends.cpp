// We have to find if 1 of 2 is there in data
// condition 1 3 people all of 3 knows each other
// or -> no one knows anyone  
// add all pairs in map
// then apply bruteforce approach 

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int m; cin >> m;

    map<pair<int,int>,int> mp;

    while(m--){
        int a , b ; cin >> a >> b;
        mp[{a,b}] = 1, mp[{b,a}] = 1;
    }

    bool condition1 = false, condition2 = false;

    for(int i=1; i<=5; ++i){
        for(int j=1; j<=5; ++j){
            for(int k=1; k<=5; ++k){
                if(i == j || j == k || i == k) continue;
                pair<int,int> a = {i,j}, b = {j,k}, c = {i,k};
                
                if(mp.find(a) != mp.end() && mp.find(b) != mp.end() && mp.find(c) != mp.end()){
                    condition1 = true;
                    break;
                }

                if(mp.find(a) == mp.end() && mp.find(b) == mp.end() && mp.find(c) == mp.end()){
                    condition2 = true;
                    break;
                }
            }
            if(condition1 || condition2) break;
        }
        if(condition1 || condition2) break;
    }

    if(condition1 || condition2) cout << "WIN";
    else cout << "FAIL";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
