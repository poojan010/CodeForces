// observation empty area window area - picture area
// first we check that can we use all width of window.
// if not then we use maximum height of window.


#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int

ull gcd(ull a,ull b){ return b == 0 ? a : gcd(b,a%b) ; }
ull lcm(ull a,ull b){ return (a / gcd(a, b)) * b; }

void solve(){

    ull a,b,c,d; 
    cin >> a >> b >> c >> d;

    ull k = lcm(a,c);
    ull na = k, nc = k;
    ull nb = (k*b)/a;       // converting it according to window size
    ull nd = (k*d)/c;       // converting it according to window size

    if(nd > nb){      // if picture frame size > window size => can't use all width.
       k = lcm(b,d);
       nb = nd = k;
       na = (k*a)/b;
       nc = (k*c)/d; 
    }
    
    ull y = na*nb;
    ull x = y - nc*nd;

    k = gcd(x,y);

    cout << x/k << "/" << y/k;

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
