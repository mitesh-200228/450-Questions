#include <unordered_set>
#include <stack>
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <climits>
#include <cmath>
#include <math.h>
#include <limits>

#define ll long long int
const ll N = 1e5 + 2, MOD = 1e9 + 7;
using namespace std;

// best for finding power of a^b in O(logn)
int power(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b % 2)
        {
            ans = ans * a;
        }
        a = a * a;
        b >>= 1;
    }
    return ans;
}

ll gcd(ll a, string b)
{
    ll res = 0;
    for (int i = 0; i < b.length(); i++)
    {
        res = ((res * 10) + (b[i] - '0')) % a;
    }
    return __gcd(a, res);
}
void solve()
{
    //for union
    // ll n,m;
    // cin >> n >> m;
    // unordered_map<int,int> mp;
    // vector<ll> v1(n);
    // for (ll i = 0; i < n; i++)
    // {
    //     cin >> v1[i];
    //     mp[v1[i]]++;
    // }
    // vector<ll> v2(m);
    // for (ll i = 0; i < m; i++)
    // {
    //     cin >> v2[i];
    //     mp[v2[i]]++;
    // }
    // cout<<mp.size();

    //for intersection
    ll n,m;
    cin >> n >> m;
    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;
    vector<ll> v1(n);
    vector<ll> v2(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> v1[i];
        mp1[v1[i]]++;
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> v2[i];
        mp2[v2[i]]++;
    }
    for(ll i=0;i<min(n,m);i++){
        if(m == n){
            if((mp1.find(v1[i]) != mp1.end()) && (mp2.find(v1[i]) != mp2.end())){
                cout<<v1[i]<<" ";
            }
        }
        else if(min(n,m) == m){
            if((mp1.find(v2[i]) != mp1.end()) && (mp2.find(v2[i]) != mp2.end())){
                cout<<v2[i]<<" ";
            }
        }
        else if(min(n,m) == n){
            if((mp1.find(v1[i]) != mp1.end()) && (mp2.find(v1[i]) != mp2.end())){
                cout<<v1[i]<<" ";
            }
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}