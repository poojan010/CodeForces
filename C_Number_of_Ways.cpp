// We have to find pairs of indexes i and indexes j
// sum upto ith index wii be total_sum/3
// sum upto jth index will be (total_sum/3)*2
// so when we get sum (total_sum/3)*2
// then all indexes that have sum total_sum/3 upto j 
// can make pair that satisfies condition
// so we have to add all indexes(total_sum/3) counts 
// upto index for which sum is (total_sum/3)*2 

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){

    ll n; cin >> n;
    
    ll sum = 0;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    if(sum % 3 != 0 || n < 3){
        cout << 0; return;
    }

    ll sum1 = sum/3;
    ll sum2 = sum1*2;
    sum = 0;
    

    ll ans = 0, cnt = 0;
    for(int i=0; i<n-1; i++){
        sum += arr[i];
        if(sum == sum2) ans += cnt;
        if(sum == sum1) cnt++;
    }

    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
