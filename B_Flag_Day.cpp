#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){

    int n,m; cin >> n >> m;

    vector<int> ans(n);
    vector<vector<int>> dances(m,vector<int>(3));

    for(int i=0; i<m; i++){
        cin >> dances[i][0] >> dances[i][1] >> dances[i][2];
    }

    if(m*3 == n){
        for(int i=0; i<m; i++) cout << 1 << " ";
        for(int i=0; i<m; i++) cout << 2 << " ";
        for(int i=0; i<m; i++) cout << 3 << " ";
        return;
    }

    ans[dances[0][0]-1] = 1; 
    ans[dances[0][1]-1] = 2;
    ans[dances[0][2]-1] = 3;

    for(int i=1; i<m; i++){
        int d1 = dances[i][0]-1;
        int d2 = dances[i][1]-1;
        int d3 = dances[i][2]-1;
        if(ans[d1] == 0 && ans[d2] == 0 && ans[d3] == 0){
            ans[d1] = 1;
            ans[d2] = 2;
            ans[d3] = 3;
        }
        else if(ans[d1] != 0){
            if(ans[d1] == 1) ans[d2] = 2, ans[d3] = 3;
            if(ans[d1] == 2) ans[d2] = 1, ans[d3] = 3;
            if(ans[d1] == 3) ans[d2] = 1, ans[d3] = 2;
        }
        else if(ans[d2] != 0){
            if(ans[d2] == 1) ans[d1] = 2, ans[d3] = 3;
            if(ans[d2] == 2) ans[d1] = 1, ans[d3] = 3;
            if(ans[d2] == 3) ans[d1] = 1, ans[d3] = 2;
        }
        else if(ans[d3] != 0){
            if(ans[d3] == 1) ans[d2] = 2, ans[d1] = 3;
            if(ans[d3] == 2) ans[d2] = 1, ans[d1] = 3;
            if(ans[d3] == 3) ans[d2] = 1, ans[d1] = 2;
        }
    }

    for(int num : ans) cout << num << " ";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}