#include <bits/stdc++.h>
using namespace std;


void solve(){

    string str; cin >> str;

    unordered_map<char,int> mpp;

    for(char ch : str){
        mpp[ch]++;
    }

    if(mpp.find('4') == mpp.end() && mpp.find('7') == mpp.end()){
        cout << -1;
    }
    else{
        int fours = mpp.find('4') == mpp.end() ? 0 : mpp['4'];
        int sevens = mpp.find('7') == mpp.end() ? 0 : mpp['7'];
    
        if(fours >= sevens) cout << 4;
        else cout << 7;
    }
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}