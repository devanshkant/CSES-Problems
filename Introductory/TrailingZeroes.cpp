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

const int MOD = 1e9+7;
const ll LINF = 1e18;

int main() {
    fastio;
    //take the input of number of test cases if required
    //write your solution here
    int power_5 = 0;
    int n;
    cin >> n;
    int p = 1;
    int d = 1;
    while(d > 0){
        d = n/pow(5, p);
        power_5 += d;
        p++;
    }
    cout << power_5 << '\n';
    return 0;
}