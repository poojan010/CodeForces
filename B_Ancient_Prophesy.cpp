// check for substring of format of dd-mm-yyyy
// if it is valid then add in map
// max value of map's pair's second value will be answer.

#include <bits/stdc++.h>
using namespace std;

map<int,int> month_days = {  {1,31}, {2,28}, {3,31}, {4,30}, {5,31}, {6,30}, {7,31}, 
    {8,31}, {9,30}, {10,31}, {11,30}, {12,31}  };

bool isValidDate(string date_str,string month_str, string year_str){
    
    int date = stof(date_str);
    int month = stof(month_str);
    int year = stof(year_str);

    if(year < 2013 || year > 2015) return false;
    if(month < 0 || month > 12) return false;
    if(date <= 0 || date > month_days[month]) return false;

    return true;

}

bool isDate(string date){
    for(int i=0; i<10; ++i){
        if(i == 2 || i == 5){
            if(date[i] != '-') return false;
        }
        else{
            if(date[i] == '-') return false;
        }
    }
    return true;
}

void solve(){
    string str; cin >> str;
    int n = str.length();

    map<string,int> mp;

    int max_occ = 0;
    string ans;

    for(int i=0; i<n-9; ++i){

        if(!isDate(str.substr(i,10))) continue;
        
        if(isValidDate(str.substr(i,2),str.substr(i+3,2),str.substr(i+6,4))){
    
            mp[str.substr(i,10)]++;
    
            if(mp[str.substr(i,10)] > max_occ){
                ans = str.substr(i,10);
                max_occ = mp[str.substr(i,10)];
            }
    
        }
        
        
    }

    cout << ans;
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
