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
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    stack<pair<ll,ll>> s;
    s.push({v[0].first,v[0].second});

    for(ll i=1; i<n ;i++){
        int start1 = s.top().first;
        int end1 = s.top().second;
        int start2 = v[i].first;
        int end2 = v[i].second;

        if(start2 > end1){
            s.push({start2,end2});
        }else{
            s.pop();
            end1 = max(end1,end2);
            s.push({start1,end1});
        }
    }

    while(!s.empty()){
        cout<<"["<<s.top().first<<","<<s.top().second<<"]"<<endl;
        s.pop();
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