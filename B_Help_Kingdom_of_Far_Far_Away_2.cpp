#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    string str; 
    cin >> str;

    string ans;

    bool isMinus = str[0] == '-';

    string int_part, fract_part = "00";

    bool flag = false;
    int j=0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '-') continue;
        if(str[i] == '.') {
            flag = true;
            continue;
        }
        if(!flag) int_part += str[i];
        else {
            fract_part[j] = str[i];
            j++; 
            if(j == 2) break;
        }
    }

    j = 0;
    for(int i=int_part.length()-1; i>=0; i--){
        if(j != 0 && j%3 == 0){
            string temp;
            temp.push_back(int_part[i]);
            temp.push_back(',');
            ans = temp + ans;
        } 
        else 
            ans = int_part[i] + ans;
        j++;
    }

    ans += "." + fract_part;

    ans = '$' + ans;

    if(isMinus) ans = '(' + ans + ')';

    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
    
    return 0;
}
