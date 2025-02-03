#include <bits/stdc++.h>
 
using namespace std;
 
// template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
 
#define int long long
using ll=long long;
using ld=long double;
using u32=unsigned int;
using u64=unsigned long long;
 
using pii=pair<int,int>;
using pll=pair<ll,ll>;
 
template<typename T> using vc=vector<T>;
template<typename T> using vvc=vc<vc<T>>;
template<typename T> using vvvc=vc<vvc<T>>;
 
using vi=vc<int>;
using vll=vc<ll>;
using vvi=vc<vi>;
using vvll=vc<vll>;
using vpp=vc<pii>;
 
#define vv(type,name,n,...) \
    vector<vector<type>> name(n,vector<type>(__VA_ARGS__))
#define vvv(type,name,n,m,...) \
    vector<vector<vector<type>>> name(n,vector<vector<type>>(m,vector<type>(__VA_ARGS__)))
 
template<typename T> using pqi=priority_queue<T,vector<T>,greater<T>>;
template<typename T> using pqd=priority_queue<T>;
template<typename T, typename S> istream& operator >> (istream& i, pair<T,S> &p){return i >> p.first >> p.second;}
template<typename T, typename S> ostream& operator << (ostream& o, const pair<T,S> &p){return o << p.first << ' ' << p.second;}
template<typename T> istream& operator >> (istream& i, vector<T> &vec){for(auto &x: vec) i >> x; return i;}
template<typename T, typename S> pair<T,S> operator + (const pair<T,S> &a, const pair<T,S> &b){return {a.first+b.first,a.second+b.second};}
template<typename T, typename S> pair<T,S> operator - (const pair<T,S> &a, const pair<T,S> &b){return {a.first-b.first,a.second-b.second};}
template<typename T> void print(vector<T> x){for(auto i: x) cout << i << ' ';cout << "\n";}
template<typename T> void print(set<T> x){for(auto i: x) cout << i << ' ';cout << "\n";}
template<typename T> void print(unordered_set<T> x){for(auto i: x) cout << i << ' ';cout << "\n";}
template<typename T> void print(T && x) {cout << x << "\n";}
template<typename T, typename... S> void print(T && x, S&&... y) {cout << x << ' ';print(y...);}
 
#define fastio                                                                                                         \
    ios::sync_with_stdio(false);                                                                                       \
    cin.tie(nullptr);                                                                                                  \
    cout.tie(nullptr)
 
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define rall(a) a.rbegin(), a.rend()
#define maxe(a) *max_element(all(a))
#define mine(a) *min_element(all(a))
#define maxp(a) max_element(all(a)) - a.begin()
#define minp(a) min_element(all(a)) - a.begin()
#define sum(a) accumulate(all(a), 0LL)
#define fo(i, n) for (ll i = n - 1; i >= 0;i--)
#define cin(a,n)  vll a; fo(i,n) {ll temp;cin>>temp;a.push_back(temp);}
#define cout(a) for(auto i:a) cout<<i<<" ";
#define drk cout<<endl;
 
#define setbits(x) __builtin_popcountll(x)
#define mid(a,b,c) ((a>=b && a<=c) || (a>=c && a<=b) ? a : (b>=a && b<=c) || (b>=c && b<=a) ? b : c)
 
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
 
#define fi(i, a, b) for (ll i = (a); i < (b); i++)
#define fd(i, a, b) for (ll i = (a); i >= (b); i--)
 
#define yn(x) cout << (x ? "YES\n" : "NO\n")
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define Yn(x) cout << (x ? "Yes\n" : "No\n")
#define Yes cout << "Yes\n"
#define No cout << "No\n"
 
const int N = 1e5 + 5;
const int N2 = 1e6 + 5;
const ll MOD = 1e9 + 7;
const ll MOD2 = 998244353;
const int INF = INT_MAX;
const ll INFL = LLONG_MAX;
const ld EPS = 1e-9;
 
// bool prime[MAX_N];
// void sieve() {
//     memset(prime, true, sizeof(prime));
//     prime[0] = prime[1] = false;
//     for (int p = 2; p * p < MAX_N; p++) {
//         if (prime[p]) {
//             for (int i = p * p; i < MAX_N; i += p) {
//                 prime[i] = false;
//             }
//         }
//     }
// }
 
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
 
ll modpow(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a, ll mod) {
    return modpow(a, mod - 2, mod);
}
 
ll GCD(ll a, ll b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}
 
ll LCM(ll a, ll b) {
return a / GCD(a, b) * b;
}
 
void precompute() {
 
}
 
void solve() {
   int n;
   cin>>n;
   cin(v,n); 

   ll sum = 0;
   ll maxi = INT_MIN;

   for(auto it:v){
        sum +=it;
        if(sum<0){
            maxi = max(maxi,sum);
            sum = 0;
            
        }else{
            maxi = max(maxi,sum);
        }
   }
   cout<<maxi;

}
 
signed main() {
    
    fastio;
    precompute();
 
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cerr << "Case #" << t << ":\n";
        solve();
    }
}

