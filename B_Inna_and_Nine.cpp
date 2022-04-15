#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double;
#define ull unsigned long long;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

#define pb push_back
#define mp make_pair
#define fo(i,n) for(int i=0;i<n;i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))

void ipgraph(int n, int m);
void dfs(int u, int par);
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

template <typename T>
void print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){fo(i,n) cout << arr[i] << " ";cout << "\n";}
template<typename T>
void printvec(vector<T>v){ll n=v.size();fo(i,n)cout<<v[i]<<" ";cout<<"\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;fo(i,n)s+=v[i];return s;}

const int mod = 1'000'000'007;
const int N = 300, M = N;
vi g[N];
 
 
void solve(){

    string s; cin>>s;
    ll ans=1, x, y;
    ll cnt=0;
    fo(i,s.size()-1)
    {
        x=s[i]-'0';
        y=s[i+1]-'0';
        if(x+y==9)  cnt++;
        else
        {
            if(cnt>0 && cnt%2==0) ans*=((cnt+2)/2); cnt=0;
        }
        /*
            Example -> cnt is odd
            4545 -> cnt is 3 so, to choose maximum 9's we have to select 1(45) and 2(45)
            if we choose middle(54) then only 1 9 is formed
            so if cnt is odd then only 1 way to get max 9's
            Example -> cnt is even
            181 -> cnt is 2
            max 9's we get are 1
            and there are 2 ways (18=9)1 = 91 and 1(81=9) = 19
            so formula for ways is ans*(cnt/2 + 1)  so in our case 2/2 + 1 = 2
        */
    }

    if(cnt>0 && cnt%2==0) ans*=((cnt+2)/2);

    print(ans);
    return;
}
 
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int t = 1;
    
    while(t--) solve();
    
    return 0;
}


void ipgraph(int n, int m){
    int i, u, v;
    while(m--){
        cin>>u>>v;
        u--, v--;
        g[u].pb(v);
        g[v].pb(u);
    }
}

void dfs(int u, int par){
    for(int v:g[u]){
        if (v == par) continue;
        dfs(v, u);
    }
}