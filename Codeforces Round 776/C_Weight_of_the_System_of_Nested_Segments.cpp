#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){

    ll n,m; cin >> n >> m;
    vector<pair<ll,ll>> v(m);
    map<pair<ll,ll>,ll> mp;

    for(int i=0; i<m; i++){
        ll num1, num2; cin >> num1 >> num2;
        v[i] = make_pair(num2,num1);
        mp[v[i]] = i+1;     // bcoz we have to print indexes.
    }
    
    // we have to select first 2*n min pairs
    // those will lead to answer.
    sort(v.begin(),v.end());

    ll ans = 0;
    vector<pair<ll,ll>> ansPairs;

    for(int i=0; i<2*n; i++){
        ans += v[i].first;
        ansPairs.push_back(make_pair(v[i].second,mp[v[i]]));
    }

    // to print segment start and end points
    // so this condition
    // li < lj < rj < ri => fulfiled.
    sort(ansPairs.begin(),ansPairs.end());

    cout << ans << "\n";
    for(int i=0; i<n; i++){
        cout << ansPairs[i].second << " " << ansPairs[2*n-1-i].second << "\n";
    }
    cout << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    ll t; cin >> t;

    while (t--)
    {
        solve();
    }
    
    return 0;
}
