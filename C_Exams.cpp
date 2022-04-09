// valera has to give exams increasing day number
// so sort this 
// first exam he can take on shedule day(bi)
// for upcoming exams if shedule day is greater than last exam
// then last exam date will be updated to schedule day.
// otherwise valera has to give exam on actual day.
// so last exam will be updated to actual day of exam.

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll n; cin >> n;

    vector<pair<int,int>> arr(n);
    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        arr[i] = make_pair(a,b);
    }
    sort(arr.begin(),arr.end());

    ll last_exam = arr[0].second;

   for(int i=1; i<n;i++){
        if(arr[i].second >= last_exam){
            last_exam = arr[i].second;
        }
        else{
            last_exam = arr[i].first;
        }
   } 

    cout << last_exam;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
