#include <bits/stdc++.h>
using namespace std;


// We will string abcd
// which is of length 4 and lexicographically minimal 
// we will repeat this string so diff bw two indexes of any cha
// will always be 4.

void solve(){

    int n; cin >> n;

    string ans;
    for(int i=1; i<=n; i++){
        if(i%4 == 1) ans += "a";
        else if(i%4 == 2) ans += "b";
        else if(i%4 == 3) ans += "c";
        else ans += "d";
    }
    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
