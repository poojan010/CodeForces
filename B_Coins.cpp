#include <bits/stdc++.h>
using namespace std;


void solve(){

    int n; cin >> n;
    int t = n;
    for(int i=n; i>=1; i--){
        if(t%i == 0){ 
            cout << i << " ";
            t = i;          // updating value 
        }
    }

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
