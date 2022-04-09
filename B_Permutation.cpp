// basically for initally 1,2...n
//  formula gives 0 ans => |a1-a2| + |a3-a4| - |a1-a2 + a3-a4| = 2k
// so if we want to change ans by value 2
// then we have to swap adjacent index 
// so first part of formula stays same
// but 2nd part have one "-1" ans "1" => result - 2 

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n,k; cin >> n >> k;

    vector<int> ans(2*n);
    for(int i=0; i<2*n; i++) 
        ans[i] = i+1;

    if(k != 0){
        int j=1;
        for(int i=0; i<k; i++){
            swap(ans[2*j - 1],ans[2*j - 2]);
            j++;
        }
    }

    for(int i=0; i<2*n; i++) 
        cout << ans[i] << " ";

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
