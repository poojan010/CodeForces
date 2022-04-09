// if smallR hits in 1st chance prob = a/b
// if missed then second chance prob
// (1-a/b) * (1-c/d) * a/b
// (1-a/b) => states prob of chance missed(bcoz 1st chance is missed so we are finding second chance prob)
// (1-c/d) => zanoes not winning probability
// (a/b) => maybe smallR hits this time.

// so k = (1-a/b) * (1-c/d)

// series = a/b + k*(a/b) + k^2(a/b)
//  = a/b(1 + k + k^2 + .... )
//  so sum = a/b(1/1-k)


#include <bits/stdc++.h>
using namespace std;

void solve(){
    double a,b,c,d; 
    cin >> a >> b >> c >> d;

    double k = ((1-a/b)*(1-c/d));

    double ans = (a/b)/(1-k);

    cout << fixed << setprecision(10) << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
