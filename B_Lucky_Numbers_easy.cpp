#include <bits/stdc++.h>
using namespace std;



void solve(){
    string str;
    cin >> str;
    int n = str.length();
    string ans;
    int len = 0;
    if(n%2 == 1){
        for(int i=0; i<(n+1)/2; i+=1) ans.push_back('4');
        for(int i=0; i<(n+1)/2; i+=1) ans.push_back('7');
    }
    else{
        for(int i=0; i<n/2; i+=1) ans.push_back('7');
        for(int i=0; i<n/2; i+=1) ans.push_back('4');

        if(str > ans){
            ans = "";
            for(int i=0; i<(n/2)+1; i+=1) ans.push_back('4');
            for(int i=0; i<(n/2)+1; i+=1) ans.push_back('7');
        }
        else{
            ans = "";
            for(int i=0; i<n/2; i+=1) ans.push_back('4');
            for(int i=0; i<n/2; i+=1) ans.push_back('7');

            do
            {
                if(ans >= str || ans.length() > str.length()){
                    break;
                }
            } while(next_permutation(ans.begin(),ans.end()));
            
            
        }
    }
    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
