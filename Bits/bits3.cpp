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
#include<bitset> 
#define ll long long int
const ll N = 1e5+ 2,MOD = 1e9+7;
const ll MAX = 1e7;
using namespace std;

bitset<MAX> isPrime;
vector<ll> ans;
void gen_prime(){
    ll n;
    cin>>n;
    isPrime.set(); // set all value as true
    isPrime[0] = isPrime[1] = 0;
    for(ll i=2;i*i<=MAX;i++){
        if(isPrime[i]){
            for(ll j=i;j*i<=MAX;j++){
                isPrime[j*i] = false;
            }
            ans.push_back(i);
        }
    }
}
vector<ll> primes;
ll divisors(ll n){
    ll result = 1;
    for(ll i=0;primes[i]<=n;i++){
        int k = primes[i];
        ll count = 0;
        while((n/k)!=0){
            count = (count + (n/k));
            k = k*primes[i];
        }
        result = ((result*(count+1)%MOD)%MOD);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    gen_prime();
    for(ll i=0; i<100 ;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    return 0;
}