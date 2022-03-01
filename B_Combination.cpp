#include <bits/stdc++.h>
using namespace std;

void solve(){

    int ans = 0;
    int n; cin >> n;
    vector<pair<int,int>> cards1,cards2;

    for(int i=0; i<n; i++) {
        int num1, num2; cin >> num1 >> num2;
        
        if(num2 > 0) 
            cards1.push_back(make_pair(num2,num1));

        else    
            cards2.push_back(make_pair(num1,num2));
    }
    // we have to focus on cards whick have bottom number > 0
    sort(cards1.begin(),cards1.end());
    reverse(cards1.begin(),cards1.end());
    int counter = 1;
    for(auto it : cards1){ 
        ans += it.second;
        counter -= 1;
        counter += it.first;
    }

    // then we will find all greater values of top numbers which have bottom 0
    sort(cards2.begin(),cards2.end());
    reverse(cards2.begin(),cards2.end());
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


// Example
// Input
// 18 0
// 4 0
// 10 0
// 5 0
// 1 0
// 18 0
// 19 0
// 11 1
// 11 1
// 0 1

// 11 1 
// 11 1         include
// 0  1         all  of this    

// 19 0
// 18 0         then we have to add values from 
// 18 0         left according to counter values.
// 10 0  
// 5  0
// 4  0
// 1  0