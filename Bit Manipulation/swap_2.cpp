#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define precise(x) cout << fixed << setprecision(x)
#define debug(x) cerr << #x << " = " << (x) << endl

const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int MAXN = 1e5 + 5;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

ll mod_add(ll a, ll b, ll m = MOD) {
    return ((a % m) + (b % m)) % m;
}

ll mod_sub(ll a, ll b, ll m = MOD) {
    return ((a % m) - (b % m) + m) % m;
}

ll mod_mul(ll a, ll b, ll m = MOD) {
    return ((a % m) * (b % m)) % m;
}

ll mod_pow(ll base, ll exp, ll m = MOD) {
    ll res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % m;
        base = (base * base) % m;
        exp /= 2;
    }
    return res;
}


bool is_prime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}


vi sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    vi primes;
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) primes.pb(i);
    }
    return primes;
}


ll factorial(ll n, ll m = MOD) {
    ll res = 1;
    for (ll i = 2; i <= n; ++i) {
        res = (res * i) % m;
    }
    return res;
}


int binary_search(vi &arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1; 
}


vi prefix_sum(vi &arr) {
    int n = arr.size();
    vi prefix(n);
    prefix[0] = arr[0];
    rep(i, 1, n) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}


bool sort_by_second(const pii &a, const pii &b) {
    return (a.second < b.second);
}


template<typename T>
void print_vector(const vector<T> &v) {
    for (const auto &x : v) cout << x << " ";
    cout << endl;
}

template<typename T1, typename T2>
void print_pair(const pair<T1, T2> &p) {
    cout << "(" << p.first << ", " << p.second << ")" << endl;
}


void solve() {
    int a, b;
    cin >> a >> b;
    a ^= b;
    b ^= a;
    a ^= b;

    cout << a << " " << b << endl;
}

int main() {
    fast_io;

    int t=1;
    while (t--) {
        solve();
    }

    return 0;
}

