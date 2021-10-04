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

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return ((n | (1 << pos)));
}

int clearBit(int n, int pos)
{
    return (n & (~(1 << pos)));
}

int updateBit(int n, int pos, int value)
{
    return ((n & (~(1 << pos))) | (value << pos));
}

void solve()
{
    ll n;
    cin >> n;
    cout << getBit(5, 2) << endl;       //getting value of bit at position 2 - 101
    cout << setBit(5, 1) << endl;       //setting 1 at position 1 - 101
    cout << clearBit(5, 2) << endl;     // setting 0 at postion 2 - 101
    cout << updateBit(5, 1, 1) << endl; // update Bit
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