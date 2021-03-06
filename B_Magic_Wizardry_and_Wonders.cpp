#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, d, l;
    cin >> n >> d >> l;
    int minD_Odd = ((n-1)/2)*(1-l) + 1;
    int maxD_Odd = ((n-1)/2)*(l-1) + l;
    int minD_Even = (n/2)*(1-l);
    int maxD_Even = (n/2)*(l-1);

    if(n & 1){
        if(d < minD_Odd || d > maxD_Odd) {
            cout << -1; return;
        }
    }
    else{
        if(d < minD_Even || d > maxD_Even) {
            cout << -1; return;
        }
    }

    vector<int> ans(n);
    for(int i=0; i<n; ++i){
        if(d == 0 && n % 2 == 0){
            ans[i] = 1;
            continue;
        }
        if(i & 1) ans[i] = d > 0 ? 1 : l;
        else ans[i] = d > 0 ? l : 1;
    }

    if(d > 0){
        int tempD = n & 1 ? maxD_Odd : maxD_Even;
        int i = 0;
        int diff = tempD - d;
        while(diff > 0){
            if(ans[i] - diff >= 1){
                ans[i] -= diff;
                diff = 0;
            }
            else{
                ans[i] = 1;
                diff -= (l - 1);
            }
            i += 2;
        }
    }
    else if(d < 0){
        int tempD = n & 1 ? minD_Odd : minD_Even; 
        int i = 0;
        int diff = d - tempD;
        while(diff > 0){
            if(ans[i] + diff <= l){
                ans[i] += diff;
                diff = 0;
            }
            else{
                ans[i] = l;
                diff -= (l - 1);
            }
            i += 2;
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