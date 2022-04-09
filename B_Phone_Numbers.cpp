#include <bits/stdc++.h>
using namespace std;

bool isTaxi(string phone_num){
    char ch = phone_num[0];
    for(int i=1; i<=7; i++){
        if(i == 2 || i == 5) continue;
        if(phone_num[i] != ch) return false;
    }
    return true;
}

bool isPizza(string phone_num){
    char ch = phone_num[0];
    for(int i=1; i<=7; i++){
        if(i == 2 || i == 5) continue;
        if(phone_num[i] >= ch) return false;
        ch = phone_num[i];
    }
    return true;
}

void solve(){
    int n; cin >> n;
    int taxi_max,pizza_max,girls_max;
    taxi_max = pizza_max = girls_max = 0;
    
    vector<string> names(n);
    vector<int> taxi(n), pizza(n), girls(n);

    for(int i=0; i<n; i++){
        int s; cin >> s >> names[i];
        for(int j=0; j<s; j++){
            string num; cin >> num;    
            if(isTaxi(num)) taxi[i]++;
            else if(isPizza(num)) pizza[i]++;
            else girls[i]++;
        }
    }

    for(int i=0; i<n; i++){
        if(taxi[i] > taxi[taxi_max])
            taxi_max = i;
        if(pizza[i] > pizza[pizza_max])
            pizza_max = i;
        if(girls[i] > girls[girls_max])
            girls_max = i;
    }

    string ans_taxi = "If you want to call a taxi, you should call:";
    for(int i=0; i<n; i++){
        if(taxi[i] == taxi[taxi_max])
            ans_taxi += " " + names[i] + ",";
    }
    ans_taxi.pop_back();
    ans_taxi += ".";

    string ans_pizza = "If you want to order a pizza, you should call:";
    for(int i=0; i<n; i++){
        if(pizza[i] == pizza[pizza_max])
            ans_pizza += " " + names[i] + ",";
    }
    ans_pizza.pop_back();
    ans_pizza += ".";

    string ans_girls = "If you want to go to a cafe with a wonderful girl, you should call:";
    for(int i=0; i<n; i++){
        if(girls[i] == girls[girls_max])
            ans_girls += " " + names[i] + ",";
    }
    ans_girls.pop_back();
    ans_girls += ".";

    cout << ans_taxi << "\n" << ans_pizza << "\n" << ans_girls;

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
