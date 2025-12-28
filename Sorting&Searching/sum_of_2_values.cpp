#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
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

vi twoSum(const vi& nums, const int &target) {
    map<int,int> mpp;
    int n = nums.size();
    for(int i = 0; i < n; ++i){
        int complement = target - nums[i];
        if(mpp.find(complement) != mpp.end()){
            return {mpp[complement] + 1, i + 1};  
        }
        mpp[nums[i]] = i;
    }
    return {};
}

int main() {
    fastio;
    
    int n, x;
    cin >> n >> x;
    vi v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    
    vi arr = twoSum(v, x);
    if(sz(arr) == 0){
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    cout << arr[0] << ' ' << arr[1] << '\n';
    /**
     * key idea: check for the complement in the map
     * use std::map everytime instead of std::unordered_map for speed.
     * Complement Check: If a + b = target, then b = target - a, so we search for (target - current_element) in the map to find the matching pair.
     */
    return 0;
}