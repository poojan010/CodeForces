#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll m,n; cin >> m >> n;

    vector<vector<ll>> arr(m,vector<ll>(n));

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }

    // 1st picture
    for(int i=1; i<n; i++)
        arr[0][i] += arr[0][i-1];

    // 1st painter ith picture finish time
    for(int i=1; i<m; i++)
        arr[i][0] += arr[i-1][0];

    // jth painter will finish painiting
    // when j-1 painter has finished
    // we will also check time of jth painter in i-1th picture.
    // painter's time for ij = max([i-1,j],[i,j-1]) + ij
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            arr[i][j] += max(arr[i-1][j],arr[i][j-1]);
        }
    }

    for(auto vec : arr)
        cout << vec.back() << " ";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
