// observation :- 
// for odd m => start from center go left then go right
// for even m => start from center go right then go left

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m; cin >> n >> m;

    if(m == 1){
        while(n--) cout << 1 << "\n";
        return;
    }

    if(m & 1){
        
        int t = 1,d = 1;
        int x = (m+1)/2;

        while(t <= n){    
            int a = t%m;
            
            if(a == 0){
                cout << x+d;
                d = 1;
            }
            else if(a == 1) cout << x ;
            else if(a%2 == 0) cout << x-d ;
            else{
                cout << x+d ;
                d += 1;
            }   

            t += 1;
            cout << "\n";
        }
    }
    else{
        int t = 1,d = 1;
        int x1 = m/2;

        while(t <= n){    
            int a = t%m;
            
            if(a == 0){
                cout << x1+d;
                d = 1;
            }
            else if(a == 1){ 
                cout << x1 ;
                d = 1;
            }
            else if(a%2 == 0) cout << x1+d ;
            else{
                cout << x1-d;
                d += 1;
            }

            t += 1;
            cout << "\n";
        }

    }

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
