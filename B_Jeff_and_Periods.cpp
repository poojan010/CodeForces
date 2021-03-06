#include <bits/stdc++.h>
using namespace std;


void solve(){

    int n; cin >> n;
    map<int,vector<int>> mp;

    for(int i=0; i<n; i++){
        int num; cin >> num;
        mp[num].push_back(i);
    }
    vector<pair<int,int>> ans;
    for(auto it : mp){
        if(it.second.size() == 1){
            ans.push_back(make_pair(it.first,0));
        }
        else {
            vector<int> temp = it.second;
            int l = temp.size();
            int d = temp[1] - temp[0];
            int i = 2;
            while (i < l)
            {
                if(temp[i] - temp[i-1] != d) break;
                i++;
            }
            if(i == l){
                ans.push_back(make_pair(it.first,d));
            }
        }
    }

    cout << ans.size() << "\n";
    for(pair<int,int> pr : ans){
        cout << pr.first << " " << pr.second;
        cout << "\n";
    }
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}