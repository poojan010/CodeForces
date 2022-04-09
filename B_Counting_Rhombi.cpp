// Example 4 4
// We will find pairs of diagonals d1 and d2
// and then determine rhombus from diagonals
// diagonal length have to be even then only vertex points are onn integer points
// Example :-
// d1 len = 2, d2 len = 2 => determine 2*2 box
// how this boxes are presented horizontally can be found by (width - box width + 1)
// how this boxes are presented vertically can be found by (height - box height + 1)
// multiply both values -> this gives total boxes of 2*2 on box. 
// simillarly d1 = 2 d2 = 4 => then vertical prent boxes are 3, horizontally are 1
// so total = 3*1 = 3
// simillarly d1 = 4 d2 = 2 => then vertical prent boxes are 1, horizontally are 3
// so total = 1*3 = 3
// then finally d1 = 4 and d2 = 4
// then total boxes = 1
// ans = 9 + 3 + 3 + 1 = 16

//  _1_ _2_ _3_ _4_
// |   |   |   |   |1
// |   |   |   |   |2
// |   |   |   |   |3
// |___|___|___|___|4


#include <bits/stdc++.h>
using namespace std;
#define ll long long int  


void solve(){
    ll w,h; cin >> w >> h;
    
    ll ans = 0;
    for(int i=2; i<=w; i+=2){
        for(int j=2; j<=h; j+=2){
            ans += (w-i+1)*(h-j+1);
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
