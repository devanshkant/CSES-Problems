#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define pb push_back
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin >> t; while (t--)
#define YES cout<<"YES"<<'\n';
#define NO cout<<"NO"<<'\n';
#define No cout<<"No"<<'\n';
#define Yes cout<<"Yes"<<'\n';
#define print(y) cout<<y<<'\n';
#define Input(y) cin>>y;


const int MOD = 1e9+7;
const ll LINF = 1e18;

int main() {
    fastio;
    //take the input of number of test cases if required
    //write your solution here
    ll n, k, x, a, b, c;
    cin >> n >> k;
    cin >> x >> a >> b >> c;
    vector<ll> arr(n);
    for(int i = 0; i < n ; ++i){
        if(i == 0)
            arr[i] = x;
        else
            arr[i] = (arr[i - 1]*a + b)%c;
    }

    int left = 0;
    ll result = 0, curr_xor = 0;
    for(int right = 0; right < n; ++right){
        curr_xor = curr_xor^arr[right];
        
        if(right - left + 1 == k){
            result = result ^ curr_xor;
            curr_xor = curr_xor^arr[left];
            left++;
        }
    }
    cout << result << '\n';
    return 0;
}