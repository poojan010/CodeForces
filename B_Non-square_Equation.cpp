//equation ax^2 + bx + c, where a = 1, b = s(x), c = -n.
// Goal — We want the minimum (positive integer) value of the root of the equation.
// Approach x^2 + s(x)*x = n therefore x^2 <= n so x <= 10^9 (as n <= 10^18)
// lets say b = s(x) b will lie between 1 to 81 ( as x <= 10^9, max value of x can be 999999999)
// (s(x) = sum of digits in x)
// Roots- positive root of the equation will be (-b + sqrt(b^2 — 4*a*c))/2*a (it can be shown that other root will be negative for the given equation)
// root = (-b + sqrt(b*b + 4*n))/2 for this root to be a positive integer, (b*b + 4*n) should be a perfect square
// we will check for every value of b (from 1 to 81), if (b*b + 4*n) is a perfect square then we will check if the sum of digits of the root is equal to b or not if it is equal to b then the root is our answer.

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool isPerfectSquare(ll x){
    if (x >= 0) {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

ll digitSums(ll n){
    ll ans = 0;
    while (n > 0)
    {
        ans += n%10;
        n /= 10;
    }
    return ans;
}

void solve(){
    ll n; cin >> n;
    
    ll ans = -1;

    for(int i=1; i<=81; i++){
        if(!isPerfectSquare(i*i + 4*n))
            continue;

        ll t = (sqrt(i*i + 4*n) - i)/2;
        if(digitSums(t) == i){
            cout << t;
            return;
        }
    }
    
    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
