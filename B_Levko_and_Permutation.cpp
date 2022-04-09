// example 1 2 3 4 5 6, k = 4
// this means 4 good ele, 2 not goog ele
//  indexes 1 2 3 4 5 6
//  nums    1 2 3 4 5 6
// initially 5 good elements 1 not good elemnt
// index 1 num 1 => gcd 1 => not good
// now if we have even not good elements to made
// then we swap adjacent indexes upto x (x is number of not good elements)
// if we have odd not good elements to made
// then we will not change first index
// we will swap adjacent indexes upto x-1 from index 1

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin >> n >> k;
    
    if(n == k){ cout << -1; return; }

    if(k == n-1){
        for(int i=0; i<n; i++)
            cout << i+1 << " ";
        return;
    }

    vector<int> ans(n);
    for(int i=0; i<n; i++) 
        ans[i] = i+1;

    k = n-k;

    if(k%2 == 0){
        for(int i=0; i<k; i+=2){
            swap(ans[i],ans[i+1]);
        }    
    }
    else{
        k--;
        for(int i=1; i<=k; i+=2){
            swap(ans[i],ans[i+1]);
        }
    }

    for(int i=0; i<n; i++)
        cout << ans[i] << " ";

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
