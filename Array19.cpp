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
    ll n1;cin>>n1;
    ll n2;cin>>n2;
    ll n3;cin>>n3;
    vector<ll> v1(n1);
    vector<ll> v2(n2);
    vector<ll> v3(n3);
    for(ll i=0;i<n1;i++){
        cin>>v1[i];
    }
    for(ll i=0;i<n2;i++){
        cin>>v2[i];
    }
    for(ll i=0;i<n3;i++){
        cin>>v3[i];
    }
    int a=0,b=0,c=0;
    set<int> s;
    vector<int> v;
    while(a<n1 && b<n2 && c<n3){
        if(v1[a] == v2[b] && v2[b] == v3[c]){
            s.insert(v1[a]);
            a++;b++;c++;
        }
        else if(v1[a]<=v2[b] && v1[a]<=v3[c]){
            a++;
        }
        else if(v1[a]>=v2[b] && v2[b]<=v3[c]){
            b++;
        }
        else if(v3[c]<=v2[b] && v3[c]<=v1[a]){
            c++;
        }
    }
    v.assign(s.begin(),s.end());
    for(ll i=0; i<s.size() ;i++){
        cout<<v[i]<<" ";
    }

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