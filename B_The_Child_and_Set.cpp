#include <bits/stdc++.h>
using namespace std;


void solve(){
    int sum,limit; 
    cin >> sum >> limit;
    
    map<int,vector<int>> mp;

    int total_sum = 0;


    // storing numbers which have same lowbit 1s value(1<<j) in map
    // by negative value
    // so max value will come first while traversing the map
    for(int i=1; i<=limit; i++){
        bitset<32> num = i;
        for(int j=0; j<32; j++){
            if(num[j] == 1){
                int t = 1<<j;
                mp[-t].push_back(i);
                total_sum += (1<<j);
                break;
            }
        }
    }

    if(sum > total_sum){
        cout << -1; return;
    }

    //we have to make sum 0
    // so we start with max number
    // traverse aal elements that has max value. 
    // if number <= sum then we will add that to answer
    // or else we will go to next value in map
    vector<int> ans;
    for(auto it : mp){
        int num = -it.first;
        for(int a : it.second){
            if(sum >= num){
                sum -= num;
                ans.push_back(a);
            }
            else break;
        }
    }

    cout << ans.size() << "\n";
    for(int num : ans)
        cout << num << " ";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
