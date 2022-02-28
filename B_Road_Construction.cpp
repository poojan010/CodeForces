#include <bits/stdc++.h>
using namespace std;


void solve(){

    unordered_map<int,int> mp;

    int n,m; cin >> n >> m;
    vector<pair<int,int>> badCities(m);

    for(int i=0; i<m; i++){
        int city1,city2; cin >> city1 >> city2;
        badCities[i] = make_pair(city1,city2);
        mp[city1] = 1;
        mp[city2] = 1;
    }

    // so basically in ideal case (no bad cities)
    // city would be like ex: n = 10
    // 1 2, 1 3, 1 4,1 5,1 6,1 7,1 8,1 9,1 10
    // we only hve to find which city is not bad 
    // bad means road possible to that city from any city

    cout << n-1 << "\n";
    int mainCity, i=1;
    while(mp.find(i) != mp.end()) 
        i++;
    mainCity = i;

    for(int i=1; i<=n; i++){
        if(i == mainCity) continue;

        cout << mainCity << " " << i << "\n";
    }

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
