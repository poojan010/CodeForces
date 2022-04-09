// We will find a for all the b[1,n]
// whichever values gives | x/y - a/b | minimum value it will be answer.
// while finding a 
// we have to find (b*x/y) if b*x is divided by y then a found
// if remainder found then we will find | x/y - a/b | => for a and a+1 
// note here a is (b*x/y) <- int value

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int x,y,n; cin >> x >> y >> n;
    double min_diff = 1e10;
    int a = 0,b = 0;
    for(int i=1; i<=n; ++i){
        int num = (double)i*x/y;
        double curr_diff = abs( x*1.0/y*1.0 - num*1.0/i*1.0 );
        if(curr_diff < min_diff){
            min_diff = curr_diff;
            a = num, b = i;
        }
        curr_diff = abs( x*1.0/y*1.0 - (num+1)*1.0/i*1.0 );
        if(curr_diff < min_diff){
            min_diff = curr_diff;
            a = num+1, b = i;
        }
    }

    cout << a << "/" << b;

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
