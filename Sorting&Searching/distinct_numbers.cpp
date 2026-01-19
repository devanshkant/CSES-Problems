#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin >> t; while (t--)
#define YES cout<<"YES"<<'\n';
#define NO cout<<"NO"<<'\n';
#define No cout<<"No"<<'\n';
#define Yes cout<<"Yes"<<'\n';
#define print(y) cout<<y<<'\n';
#define Input(y) cin>>y;

#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>

constexpr int MOD = 1e9+7;
constexpr ll INF = 1e18;
int main() {
    fastio;
    //take the input of number of test cases if required
    //write your solution here
    int n; cin>>n;
    vi v(n);
    for(int &k: v){
        cin>>k;
    }
    std::unordered_set<int> st;
    for(int k:v){
        st.insert(k);
    }
    print(st.size());
    return 0;
}