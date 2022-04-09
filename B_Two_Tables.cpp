// range of array is 1 to 50
// so will apply bruteforce solution
// ans check for every pair b/w -50,-50 to 50,50

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n1, m1; cin >> n1>> m1;
    vector<string> mat1(n1);
    for(int i=0; i<n1; i++)
            cin >> mat1[i];
    
    int n2, m2; cin >> n2>> m2;
    vector<string> mat2(n2);
    for(int i=0; i<n2; i++)
            cin >> mat2[i];
    

    int maxValue = -1;
    pair<int,int> ans = make_pair(0,0);

    for(int i=-50; i<=50; i++){
        for(int j=-50; j<=50; j++){
            
            int temp = 0;
            for(int a=0; a<n1; a++){
                for(int b=0; b<m1; b++){
                    if(a+i < 0 || a+i >= n2) continue;
                    if(b+j < 0 || b+j >= m2) continue;
            
                    temp += ((mat1[a][b] - '0')*(mat2[a+i][b+j] - '0'));
                }
            }

            if(temp > maxValue){
                maxValue = temp;
                ans = make_pair(i,j);
            }
        }
    }

    cout << ans.first << " " << ans.second;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}