#include <iostream>
#include <string>
#include <vector>
#include<deque>
#include <algorithm>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin >> t; while (t--)
#define YES cout<<"YES"<<'\n';
#define NO cout<<"NO"<<'\n';
#define No cout<<"No"<<'\n';
#define Yes cout<<"Yes"<<'\n';
#define print(y) cout<<y<<'\n';

const int MOD = 1e9+7;
const ll LINF = 1e18;

int main() {
    fastio;
    //take the input of number of test cases if required
    //write your solution here
    /*XOR of all Window Minimums*/

    ll n, k, x, a, b, c;
    cin >> n >> k;
    cin >> x >> a >> b >> c ;
    vector<ll> arr(n);
    for(int i = 0; i < n; ++i){
        if(i == 0)
            arr[i] = x;
        else
            arr[i] = (a*arr[i-1] + b) % c;
    }
    ll result = 0;
    int left = 0;
    deque<pair<int, int>> dq;   
    /*
    here, used a pair because pair.first stores the element and pair.second stores the index of the element , to check when the element enters and whta is it's index, because if the exiting element is equal to the minimum element itself, then we need to slide the window
     */
    for(int right = 0; right < n; ++right){
        while(!dq.empty() && dq.back().first > arr[right])
            dq.pop_back();
        dq.push_back({arr[right], right});
        if(right - left + 1 < k){
            continue;
        }else{
            result = result ^ dq.front().first;
            if(dq.front().second == left)   
                dq.pop_front(); //this is the step for which indices are stroed
            ++left;
        }
    }//TC : O(n);SC : O(k);
    cout << result << '\n';
    return 0;
}