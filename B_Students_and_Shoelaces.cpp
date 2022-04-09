#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m; cin >> n >> m;

    vector<set<int>> v(n);

    for(int i=0; i<m; i++){
        int n1,n2; cin >> n1 >> n2;
        v[n1-1].insert(n2-1);
        v[n2-1].insert(n1-1);
    }

    int ans = 0;

    bool flag = true;
    while (flag){
        flag = false;
        vector<int> singles;

        for (int i = 0; i < n; i++){
            if(v[i].size() == 1)
                singles.push_back(i);
        }
        

        if(singles.size() > 0){ 
            flag = true;
            ans += 1;
        }

        for(int i=0; i<singles.size(); i++){
            int num = singles[i];
            set<int> s = v[num];
            for (auto itr = s.begin();itr != s.end(); itr++){
                int val = *itr;
                v[val].erase(num);
            }
            v[num].clear();
        }

        singles.resize(0);
    }

    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();

    return 0;
}
