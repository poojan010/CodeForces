// Example :-
// 3 2 1 6 5 4
// so inna will come at 3 1 5
// or 2 6 4
// bcoz when inna comes back k-1 tasks are completed 
// so we have to jump to index + kth task
// so ans will be between 0 to k => k exclusive
// ans >=0 and ans < k bcoz we have to find min value if multiple soultions. 

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k; cin >> n >> k;

    vector<int> arr(n);
    vector<int> temp(k,0);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        temp[i%k] += arr[i];    // calculating sums for i to k values
    }

    int maxVal = INT_MAX, ansIndex = k;

    // whichever is min value b/w 1 to k sums
    // it will be answer.
    for(int i=0; i<k; i++){
        if(temp[i] < maxVal){
            maxVal = temp[i];
            ansIndex = i;
        }
    }

    cout << ansIndex + 1 << "\n";

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
