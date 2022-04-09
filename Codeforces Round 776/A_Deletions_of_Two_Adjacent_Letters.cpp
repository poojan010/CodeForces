// observation if number is at even index position then yes else no. 

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str; cin >> str;
    char c; cin >> c;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];

        if(ch == c && i%2 == 0){
            cout << "YES" << "\n";
            return;
        }
    }

    cout << "NO" <<"\n";
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
