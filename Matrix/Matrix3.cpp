#include<unordered_set>
#include<stack>
#include<iostream>
#include<vector>
#include<string>
#include<numeric>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<set>
#include<climits>
#include<cmath>
#include<math.h>
#include<limits>
 
#define ll long long int
const ll N = 1e5+ 2,MOD = 1e9+7;
using namespace std;
 
// best for finding power of a^b in O(logn)
int power(ll a,ll b) {
    ll ans = 1;
    while(b>0){
        if(b%2){
            ans=ans*a;
        }
        a=a*a;b>>=1;
    }
    return ans;
}
 
ll gcd(ll a, string b){
    ll res = 0;
    for (int i = 0; i < b.length(); i++){
        res = ((res * 10) + (b[i] - '0')) % a;
    }
    return __gcd(a,res);
}
void solve(){
    ll n;cin>>n;
    ll m;cin>>m;
    vector<vector<ll>> v(n,vector<ll> (m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    ll mn = INT_MAX,mx=INT_MIN;
    for(ll i=0;i<n;i++){
        mn=min(mn,v[i][0]);
        mn=max(mx,v[i][m-1]);
    }

    int needed = (n*m + 1)/2;
    int cnt = 0;
    while(mn<mx)
    {
        int mid = mn + (mx-mn)/2;
        for(int i=0;i<r;i++){
            cnt+=upper_bound(v[i].begin(),v[i].end(),mid) - v[i].begin();
        }

        if(cnt<needed){
            mn=mid+1;
        }else{
            mx=mid;
        }
    }
    return min;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}