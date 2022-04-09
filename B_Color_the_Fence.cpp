// first focus on making maximum length number
// so we have to choose lowest number
// if lowest num is l then initally ans will be llllll.. upto his length
// if there is some reminder left then we choose from 9 to 1 
// whicever can be selcted
// then we replace it with index of ans
// then again we choose from 9 to 1 
//  repeat this process till lowest numbers digit.
// after then following digitst will b 'l' only. 

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int v; cin >> v;
    
    if(v == 0){
        cout << -1;
        return;
    }

    vector<int> digits(9);
    for(int i=0; i<=8; i++) cin >> digits[i];

    string ans;
    int minVal = INT_MAX, d;
    
    for(int i=0; i<9; i++){
        if(digits[i] > minVal) continue;
        minVal = digits[i];
        d = i+1;
    }

    int len = v/minVal;

    for(int i=0; i<len; i++){
        ans += (char)('0'+d);
    }

    v = v - len*minVal;
    
    int j = 0;
    bool flag = true;
    while (flag)
    {
        flag = false;   // it will be only true if we can replace it with max number.
        for(int i=8; i>=d; i--){
            if(digits[i] - minVal <= v){
                ans[j++] = (char)('1'+i);
                v -= (digits[i] - minVal);
                flag = true;        // bcoz we have to again select from 9 to 1.
                break;
            }   
        }
    }
    
    
    if(ans == ""){
        cout << -1;
        return;
    }

    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
