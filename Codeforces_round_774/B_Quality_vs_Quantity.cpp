#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

// We will sort array and 
// iterate from left(min) and right(max)
// initialy take two ele from left and 1 from right
// bcoz of condition : Sum(Red)>Sum(Blue)  and Count(Red)<Count(Blue)
// compare both sums 

void solve(){
    ll n; cin >> n;
    
    if(n <= 2 ) {
        cout << "NO";
        return;
    }
    vector<ll> arr(n);

    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    
    sort(arr.begin(),arr.end());

    ll sum1 = arr[0]; 
    ll sum2 = 0;
    ll i=1, j = n-1;

    while (i < j)
    {
        sum1 += arr[i];
        sum2 += arr[j];
        if(sum2 > sum1){
            cout << "YES";
            return;
        }
        i++;
        j--;
    }
    if(sum2 > sum1){
        cout << "YES";
        return;
    }

    cout << "NO";

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    ll t; cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }
    
    return 0;
}
