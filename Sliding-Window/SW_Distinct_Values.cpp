#include <iostream>
#include <string>
#include <vector>
#include<map>
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

    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    map<ll, int> freq;
    int left = 0, curr_dist_count = 0;
    
    for(int right = 0; right < n; ++right){
        //whenever a new element is encountered in any window, increment curr_dist_count
        if(freq[arr[right]] == 0)
            curr_dist_count++;
        
        ++freq[arr[right]]; //incraese frequency for every element

        if(right - left + 1 == k){
            cout << curr_dist_count << ' ';  //printing count of dist elements for each window
            --freq[arr[left]];          //before slidign to the next window decrement the frequency of the exiting element
            if(freq[arr[left]] == 0){   
                /*if after decrementing the frequency, it becomes zero,it means exiting element's frequency will be zero in the window after sliding, unless the entering element is equal to the exiting element(but we are handling this in line 39 itself).
                we decrement the dis_count because of this.*/
                curr_dist_count--;
                freq.erase(arr[left]);  //remove the left element before sliding and after decrementing the current_dist_count
            }
            ++left;     //sliide the window
        }
    }
    
    return 0;
}