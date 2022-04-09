// to find limit we have to divide both eqn by x^z
// z is max power of polunomial eqn in denominator
// if n > m then numerator will form infiity value 
// if n == m  then only constants of max power will left in equaition.
// we have to check if p < 0 && q < 0 || p > 0 && q > 0 => ans is +ve
// otherwise ans -ve.

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n,m; cin >> n >> m;

    vector<int> a(n+1), b(m+1);
    for(int i=0; i<=n; ++i) cin >> a[i];
    for(int i=0; i<=m; ++i) cin >> b[i];

    int p = 0, q = 0;

    if(n > m){
        if( (a[0] < 0 && b[0] < 0) || (a[0] > 0 && b[0] > 0) ) cout << "Infinity";
        else cout << "-Infinity";
        return;
    }

    if(n == m) p += a[0];
    q += b[0];

    if(q == 0){
        if(p < 0 || q < 0) cout << "-Infinity";
        else cout << "Infinity";
    }
    else if(p == 0){
        cout << "0/1";
    }
    else{
        int z = __gcd(p,q);
        p /= z;
        q /= z;
        if((p > 0 && q > 0) || (p < 0 && q < 0)) 
            cout << p << "/" << q;
        else 
            cout << "-" << abs(p) << "/" << abs(q);
    }
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
