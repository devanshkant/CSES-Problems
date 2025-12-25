#include<iostream>
#include<vector>
using namespace std;
//xor of sum of each window of k elements, from left to right
#define ll long long

int main (){
    ll n, k, x, a, b, c;
    cin >> n >> k;
    cin >> x >> a >> b>> c;
    vector<ll> arr(n);
    for(int i = 0; i < n; ++i){
        if(i == 0)
            arr[i] = x;
        else
            arr[i] = (a*arr[i-1] + b) % c;
    }
    int left = 0;
    ll window_sum = 0, ans = 0;
    for(int right = 0; right < n; ++right){
        window_sum += arr[right];

        if(right - left + 1 < k){
            continue;
        }
        else{
            ans = ans ^ window_sum;
            window_sum -= arr[left];
            ++left;
        }
    }
    cout << ans <<'\n';

    return 0;

}