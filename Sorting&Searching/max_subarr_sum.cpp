#include <iostream>
#include <string>
#include <vector>
#include<climits>
#include <algorithm>
using namespace std;

#define ll long long
#define pb push_back
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

const int MOD = 1e9+7;
const ll LINF = 1e18;
ll maxSubArray(vector<ll>& nums) {
    /*Kadane's Algorithm*/
    int n=nums.size();
    ll sum=0, max=LLONG_MIN;
    for(int i =0; i<n; i++){
        sum=sum+nums[i];

        if(sum>max){
            max=sum;
        }
        if(sum<0) sum=0;  
    }
    return max;
}
int main() {
    fastio;
    //take the input of number of test cases if required
    //write your solution here
    int n;
    cin >> n; 
    vector<ll> v(n);
    for(int i = 0; i < n; ++i){
        cin>>v[i];
    }
    ll result = maxSubArray(v);
    cout << result << ' ';

    /**
     * key idea: take all the inputs in long long, took so long to figure out 
     * takeaways: 1. when the subarray sum gets negative, reassign sum := 0,
     *            2. why sliding window will fail: either there should be monotonicity in the elemnets, or there should be a fixed subarray size, neither of thm are there in the quesiton, we can't just skip negative numbers because they might be between two large positive numbers 
     * Kadane's algo is to be used in similar cases
     */
    return 0;
}