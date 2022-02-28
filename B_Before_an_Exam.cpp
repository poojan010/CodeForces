#include <bits/stdc++.h>
using namespace std;


void solve(){

    int d,sum; cin >> d >> sum;

    vector<int> ans(d);
    vector<pair<int,int>> schedules;

    int cur_sum = 0;
    int minSum = 0, maxSum = 0;


    // first we store avg values 
    for(int i=0; i<d; i++){
        int num1, num2; cin >> num1 >> num2;
        minSum += num1, maxSum += num2;
        schedules.push_back(make_pair(num1,num2));
        ans[i] = (num1+num2)/2;             // <--- avg values
        cur_sum += ans[i];
    }

    // if sum is not between min nd max boundary 
    // then solution is not possible
    if(sum < minSum || sum > maxSum){
        cout << "NO";
        return;
    }

    // if avg value sum < input sum
    // we follow greedy approach
    // and increase values by respective possible values
    if(cur_sum < sum){
        int diff = sum - cur_sum;
        int i = 0;
        while (diff > 0)
        {
            int cur_diff = schedules[i].second - ans[i];
            cur_diff = cur_diff > diff ? diff : cur_diff;
            ans[i] += cur_diff;
            diff -= cur_diff;
            i++; 
        }
        
    }
    // if avg value sum > input sum
    // we follow greedy approach
    // and decrease values by respective possible values
    else if(cur_sum > sum){
        int diff = cur_sum - sum;
        int i = 0;
        while (diff > 0)
        {
            int cur_diff = ans[i] - schedules[i].first;
            cur_diff = cur_diff > diff ? diff : cur_diff;
            ans[i] -= cur_diff;
            diff -= cur_diff;
            i++; 
        }
    }

    cout << "YES" << "\n";
    for(int hr : ans) cout << hr << " ";
    
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
    
    return 0;
}
