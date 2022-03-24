#include <bits/stdc++.h>
using namespace std;

// Int and constant declaration

#define ll int
#define int long long int
#define inf LLONG_MAX
int M = (int)(pow(10, 9) + 7);
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define start      \
    ll _ = 1;      \
    ci >> _;       \
    while (_--)    \
    {              \
        runtest(); \
    }
#define cases \
    cse++;    \
    co << "Case #" << cse << ": ";

// variables and loops

#define var ll n, m, x = 0, y = 0, z = 0, c = 0, i, j, h, k = 0, ans = 0;
#define FOR(h, j, n) for (h = j; h < n; h++)
#define loop(i, n) for (i = 0; i < n; i++)
#define FORR(i, b, a) for (i = b; i >= (a); i--)
#define array ll b[200004] = {0};

// short typing

#define vi vector<int>
#define vii vector<vi>
#define si set<int>
#define pii pair<int, int>
#define mii map<int, int>
#define pq priority_queue
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define gcd __gcd
#define ci cin
#define co cout

// Output related

#define yes co << "YES\n";
#define no co << "NO\n";
#define nan co << "-1\n";
#define zero co << "0\n";
#define nl co << "\n";
#define pri(x) co << (x) << " ";
#define getarr   \
    ci >> n;     \
    loop(i, n)   \
    {            \
        ci >> x; \
        a.pb(x); \
    }
#define getstr \
    ci >> n;   \
    string s;  \
    ci >> s;
void putar(vi a)
{
    ll i;
    loop(i, sz(a))
    {
        co << a[i] << " ";
    }
    nl;
}

// predefined containers
int cse = 0;
vi a;

// predefined functions

void runtest()
{
    var;
    a.clear();
    ci >> n;
    if (n & 1)
    {
        for (i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        if (n == 2)
        {
            cout << "-1";
        }
        else
        {
            cout << "2 3 1 4 ";
            for (i = 5; i <= n; i++)
            {
                cout << i << " ";
            }
        }
    }

    nl;
}

signed main()
{

    fast;
    start;
    return 0;
}