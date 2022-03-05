#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// GOAL is diff not greater than 500
// so we will fo through array 
// and assign that egg to 
// whichever is having money diff lesser than 500.
// if it can not be possible
// than print -1.

void solve(){
    ll n; cin >> n;
    vector<ll> A(n),B(n);
    for(int i=0; i<n; i++) cin>>A[i]>>B[i];

    string ans;

    ll moneyA = 0, moneyB = 0;
    bool notPossible = false;
    for(int i=0; i<n; i++){

        if(abs((moneyA + A[i]) - moneyB) <= 500){
            moneyA += A[i];
            ans += "A";
        }
        else if(abs((moneyB + B[i]) - moneyA) <= 500){
            moneyB += B[i];
            ans += "G";
        }
        else{
            notPossible = true;
            break;
        }
    }

    if(notPossible) cout << -1;
    else cout << ans;

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
