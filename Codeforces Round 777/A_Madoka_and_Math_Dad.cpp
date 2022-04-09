// observation
// for max decimal we can select 1111..
// but since 2 same digit in adjacent not allowed
// we can select 121212
// or 212121
// whichever adds upto n 
// 12 or 21 gives sum 3
// n%3 gives 1 2 or 0
// when it gives 1 
// we have to start from 1 so end digit can be 1
// if we start from 2 then last digit will be 2 so sum will be n+1

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    string ans;

    if(n <= 2){
        char ch = (char)('0'+n);
        cout << ch << "\n";
        return;
    }

    if(n%3 != 1){
        ans.push_back('2');
    }
    else{
        ans.push_back('1');
    }

    n -= (int)(ans[0]-'0');

    while (n > 0)
    {
        if(ans.back() == '1'){
            ans.push_back('2');
            n -= 2;
        }
        else{
            ans.push_back('1');
            n -= 1;
        }
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
