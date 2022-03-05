#include <bits/stdc++.h>
using namespace std;


void solve(){

    int n,m,d; cin >> n >> m >> d;
    int x = n*m;
    vector<int> grid(x);
    for(int i=0; i<x; i++) cin >> grid[i];
    
    sort(grid.begin(),grid.end());
    
    //  we have to find "median" of array
    // it will be the best possible answer
    // if x is odd 
    // then we have to make all elements as mid element 
    // if x is even
    // then we have to make all elements as mid or mid+1 element
    // dif%d => indicates that if d*n = diff (n is any integer) 
    // can be achieved or not.

    if(x%2 == 1){
        int ans = 0;
        int t = grid[(x-1)/2];
        for(int num : grid){
            int dif = abs(num-t);
            if(dif%d != 0) {
                cout << -1;
                return;
            }
            ans += dif;
        }
        cout << ans/d ;
    }
    else{
        int t1 = grid[x/2], t2 = grid[(x/2)-1];
        bool t1Valid = true, t2Valid = true;
        int ans1 = 0, ans2 = 0;
        for(int num : grid){
            
            int dif1 = abs(num-t1);
            if(dif1%d != 0) t1Valid = false;
            ans1 += dif1;

            int dif2 = abs(num-t2);
            if(dif2%d != 0) t2Valid = false;
            ans2 += dif2;
        }
        if(!t1Valid || !t2Valid) {
            cout << -1;
        }
        else if(!t1Valid){
            cout << ans2;
        }
        else if(!t2Valid){
            cout << ans1;
        }
        else {
            cout << min(ans1,ans2)/d;
        }
    }

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
