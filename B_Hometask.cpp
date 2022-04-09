// observation 2,3,5 => means divisible by 10 and 3
// so '0' must be there in digit set
// if digit's sum is divided by 3 then num can be divided by 3

// if sum%3 == 1 
// then remove digit which have digit%3 = 1
// if not found then remove 2 digits which have digit%3 = 2

// for sum%3 == 2
// then remove 1 digit => digit%3 = 2
// or remove 2 digits => digit%3 == 1

// edge case leading zeros

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    map<int,int> mp;
    vector<int> rem1,rem2;
    int sum = 0;
    for(int i=0; i<n; ++i){ 
        int num; cin >> num;
        ++mp[num];
        sum += num;
        if(num%3 == 1) rem1.push_back(num);
        else if(num%3 == 2) rem2.push_back(num);
    }

    if(mp.find(0) == mp.end()){
        cout << -1; return;
    }

    sort(rem1.begin(),rem1.end());
    sort(rem2.begin(),rem2.end());

    if(sum%3 == 1){
        if(rem1.size() != 0){
            --mp[rem1[0]];
        }
        else{
            if(rem2.size() < 2){
                cout << -1; return;
            }
            --mp[rem2[0]];
            --mp[rem2[1]];
        }
    }
    else if(sum%3 == 2){
        if(rem2.size() != 0){
            --mp[rem2[0]];
        }
        else{
            if(rem1.size() < 2){
                cout << -1; return;
            }
            --mp[rem1[0]];
            --mp[rem1[1]];
        }
    }

    if(mp.size() == 1 && mp.find(0) != mp.end()){
        cout << 0; return;
    }
    
    string ans;
    bool flag = true;
    for(auto it : mp){
        int t = it.second;
        int p = it.first;
        if(t == 0) continue;
        if(p != 0) flag = false;        //if all digits are 0 then print only one 0.
        char ch = (char)('0'+p);
        ans.insert(0,t,ch);
    }
    if(flag) cout << 0;
    else cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
