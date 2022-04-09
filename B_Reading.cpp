// sort array 
// reverse array
// first k values are answer.

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k; cin >> n >> k;

    vector<pair<int,int>> arr(n);
    for(int i=0; i<n; i++){
        int x; cin >> x;
        arr[i] = make_pair(x,i+1);
    }

    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());

    vector<int> ans(k);

    for(int i=0; i<k; i++){
        ans[i] = arr[i].second;
    }

    sort(ans.begin(),ans.end());

    cout << arr[k-1].first << "\n";
    for(int num : ans) cout << num << " ";

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    solve();
    
    return 0;
}
