//we have to gind num b/w [p-d ,p]
// such that there is max trailing 9s
// we will start with number that is p-d
// Example : p = 1029, d = 102
// range [927,1029] 
// max num from our requirements : 999
// so we have to convert 7 to 9 => add 2, d-=2
// now we have to conver 2 to 9 => so add 70, d-=70.
// we will follow this process till d > 0
// and then add this total value to num(p-d)

#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll p,d; cin >> p >> d;

    ll ans = p-d; 
    ll temp = 0;
    p = ans;

    ll pow = 1;

    while (d > 0)
    {
        ll rem = p%10;
        rem = 9 - rem;
        
        if(rem != 0){

            while (rem > 0 && rem*pow > d) rem--;
            
            if(rem == 0)  break;
 
            d -= rem*(pow);
            temp += rem*(pow);
        }   
        
        pow = pow*10;
        p /= 10;
    }

    cout << ans + temp;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
