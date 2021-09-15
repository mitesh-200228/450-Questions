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

void multiply(vector<ll> &v,int x){
    int carry = 0,mul;
    for(ll i=0;i<v.size();i++){
        mul=v[i]*x + carry;
        v[i]=mul%10;
        carry=mul/10;
    }

    while(carry){
        v.push_back(carry%10);
        carry/=10;
    }
}

void solve(){
    ll n;cin>>n;
    vector<ll> v;
    v.push_back(1);
    ll i;
    for(i=1; i<=n ;i++){
        multiply(v,i);
    }
    reverse(v.begin(),v.end());
    i=0;
    while(v[i]==0){
        i++;
    }
    for(ll j=i;j<v.size();j++){
        cout<<v[j];
    }cout<<endl;
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