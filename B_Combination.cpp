#include <bits/stdc++.h>
using namespace std;
 
void solve(){
 
    int n; cin >> n;
    vector<pair<int,int>> cards1,cards2;
 
    for(int i=0; i<n; i++) {
        int num1, num2; cin >> num1 >> num2;
        
        if(num2 > 0) 
            cards1.push_back(make_pair(num2,num1));
 
        else    
            cards2.push_back(make_pair(num1,num2));
    }
 
    sort(cards1.begin(),cards1.end());
    reverse(cards1.begin(),cards1.end());
    sort(cards2.begin(),cards2.end());
    reverse(cards2.begin(),cards2.end());
 
    int ans = 0, counter = 1;
    for(auto it : cards1){ 
        ans += it.second;
        counter -= 1;
        counter += it.first;
    }
    int x = cards2.size();
    int limit = min(counter,x);

    for(int i=0; i<limit; i++) ans += cards2[i].first;
 
    cout << ans;
 
    return;
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}