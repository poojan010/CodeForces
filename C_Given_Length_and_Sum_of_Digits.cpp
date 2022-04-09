#include <bits/stdc++.h>
using namespace std;


void solve(){

    int m,s; cin >> m >> s;

    // Solution not possible cases
    if(s == 0) {
        if(m > 1) cout << "-1 -1";
        else cout << "0 0";
        return;
    }
    if(s > 9*m){
        cout << "-1 -1";
        return;
    }
    
    string maxStr, minStr;
    int s1 = s, s2 = s;

    // greedy approach
    // selecting max value at each step
    while (s1 > 0)
    {
        int t = min(s1,9);
        maxStr += ('0' + t);
        s1 -= t;
    }
    
    int x = maxStr.length();
    for(int i = x; i<m; i++) maxStr += '0';

    int i = 1;

    // greedy approach
    // selecting min value at each step
    // not selecting 0 at first position.
    // bcoz starting zeros are not allowed.
    while (s2 > 0)
    {
        int t = 1;
        if(9*(m-i) < s2 ) t = s2 - 9*(m-i);
        else if(i == 1) t = 1;  
        else t = 0;
        minStr += ('0'+t);
        s2 -= t;  
        i++;
    } 
    x = minStr.length();
    for(int i = x; i<m; i++) minStr += '0';


    cout << minStr << " " << maxStr;

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
