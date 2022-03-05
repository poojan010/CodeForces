#include <bits/stdc++.h>
using namespace std;

// We will apply prefix from left and from right 
// and check how many lesser hights 
// are from left and from right.
// whicever idex gives max value => ans.

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    
    int ans = 0;
    vector<int>left(n), right(n);
    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1])
            left[i] = left[i - 1] + 1;
        if (arr[n - i - 1] >= arr[n - i])
            right[n - i - 1] = right[n - i] + 1;
    }
 
    for (int i = 0; i < n; i++) {
        ans = max(ans, left[i] + right[i]);
    }
 
    cout << ans + 1;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
