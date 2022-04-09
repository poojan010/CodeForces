// 2 scenario -> 1. s < f, 2. s > f
// we will handle both scenarios 
// num is b/w l-1 to r for scenario 1 then cout - "X"
// for scenario 2 if num is bw l to r+1 then cout - "X"
// otherwise cout "L" or "R" according to scenario 

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m,s,f;
    cin >> n >> m >> s >> f;

    if(f > s){
        int step = 1;
        for(int i=0; i<m; i+=1){
            int t,l,r;
            cin >> t >> l >> r;

            while (step <= t){
                if(step < t){
                    cout << "R";
                    s += 1;
                }
                else if(s >= l-1 && s <= r) cout << "X";
                else{ 
                    cout << "R";
                    s += 1;
                }
                if(s == f) break;
                step += 1;
            }
            if(s == f) break;
        }
        while(s != f){
            cout << "R";
            s += 1;
        }
    }
    else{
        int step = 1;
        for(int i=0; i<m; i+=1){
            int t,l,r;
            cin >> t >> l >> r;
            while (step <= t){
                if(step < t){
                    cout << "L";
                    s -= 1;
                }
                else if(s >= l && s <= r+1) cout << "X";
                else{ 
                    cout << "L";
                    s -= 1;
                }
                if(s == f) break;
                step += 1;
            }
            if(s == f) break;
        }
        while(s != f){
            cout << "L";
            s -= 1;
        }
    }

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();

    return 0;
}
