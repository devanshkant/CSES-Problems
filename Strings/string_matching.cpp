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
vector<int> createLPS(string pattern){
    int m = pattern.size();
    vector<int> lps(m, 0);

    int len = 0, i = 1;
    while(i < m){
        if(pattern[i] == pattern[len]){  
            ++len;
            lps[i] = len;
            ++i;
        }
        else{
            if(len != 0){
                len = lps[len - 1];
            }
            else{
                lps[i] = 0;
                ++i;
            }
        }
    }
    return lps;
}

void KMP(string text, string pattern, int &result){
    int n = text.size(), m = pattern.size();
    vector<int> lps = createLPS(pattern);
    int i = 0, j = 0;

    while(i < n){
        if(text[i] == pattern[j]){
            ++i, ++j;
        }
        if(j == m){
            result++;
            j = lps[j - 1];
        }
        else if(i < n && text[i] != pattern[j]){
            if(j != 0){
                j = lps[j - 1];
            }
            else{
                ++i;  
            }
        }
    }
}
int main() {
    fastio;
    //take the input of number of test cases if required
    //write your solution here
    string text, pattern;
    cin >> text;
    cin >> pattern;
    int result = 0;
    KMP(text, pattern, result);
    cout << result << '\n';
    return 0;
}