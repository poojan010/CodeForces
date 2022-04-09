#include <bits/stdc++.h>
using namespace std;


void solve(){
    int l,r,a; cin >> l >> r >> a;

    
    int ans = (r/a) + r%a;
    r -= 1;
    if ( r >= l  )
    {
        int temp = (r/a) + r%a;
        ans = max(ans,temp);        
    }

    r += 1;
    int t = r/a;
    t = t*a;
    if(t >= l+1){
        ans = max(ans,((t-1)/a) + (t-1)%a);
    }

    cout << ans << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t; cin >> t;

    while (t--)
    {
        solve();
    }
    
    return 0;
}
