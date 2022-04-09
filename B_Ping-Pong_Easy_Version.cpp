// Observation : we have to find if path exsist or not
// best data structure in this situation is graph
// we will create adjacency list graph using condition from probelm.
// and then we start travering graph from "Start" point 
//  if we reach to end then path found.
// otherwise path not found. 

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph(101);
vector<int> visitedGlobal(101);

void dfs(int start, int end, vector<int>& visited, bool& flag){

    visited[start] = 1;

    if(start == end) {
        flag = true;
        return;
    } 
    
    for(int num : graph[start]){
        if(visited[num] == 1) continue;
        dfs(num,end,visited,flag);
    }
    
    return;
}

void solve(){
    int n; cin >> n;

    vector<pair<int,int>> arr;

    while(n--){
        int t; cin >> t;
        if(t == 1){
            int c,d; cin >> c >> d;
            for(int i=0; i<arr.size(); i+=1){
                int a = arr[i].first, b = arr[i].second;
                int n = arr.size();
                if( (c < a && a < d) || (c < b && b < d) ){
                    graph[i].push_back(n);
                }
                if( (a < c && c < b) || (a < d && d < b) ){
                    graph[n].push_back(i);
                }
            }
            arr.push_back(make_pair(c,d));
        }
        else{
            int x,y; cin >> x >> y;
            x -= 1, y -= 1;
            bool canReach = false;
            vector<int> tempVisited = visitedGlobal;
            dfs(x,y,visitedGlobal,canReach);
            if(canReach) cout << "YES";
            else cout << "NO";
            cout << "\n";
        }
    }

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
