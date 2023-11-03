#include <bits/stdc++.h>
#define endl "\n"
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define rrep(i, a, b) for(auto i = a; i > b; --i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define RREP(i, a, b) for(auto i = a; i >= b; --i)
#define pii pair<int, int>
#define tii tuple<int, int, int>
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define INF numeric_limits<int>::max()
#define PIV (1 << 20)
using namespace std;

#ifdef ONLINE_JUDGE
constexpr bool ndebug = true;
#else
constexpr bool ndebug = false;
#endif
#define FAST_IO \
    if constexpr (ndebug) { cin.tie(nullptr); ios::sync_with_stdio(false); }
#define debug(x) \
    if constexpr (!ndebug) cout << "[DEBUG] " << #x << " == " << x << '\n';
#define debugf(...) \
    if constexpr (!ndebug) { cout << "[DEBUG] "; printf(__VA_ARGS__); }
#define debugc(c) \
    if constexpr (!ndebug) { cout << "[DEBUG] "<< #c << ": "; for (const auto& elem : c) cout << elem << ", "; cout << '\n'; }

typedef long long ll;
typedef unsigned long long ull;

int cache[42];

int fibonacci(int n) {
    int& ret = cache[n];
    if(ret != -1) return ret;
    if (n == 0) return ret = 1;
    if (n == 1) return ret = 0;
    return ret = fibonacci(n - 1) + fibonacci(n - 2);
}


int main(void) {
    FAST_IO;   
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        memset(cache, -1, sizeof(cache));
        int a;
        cin >> a;
        if (a == 0) {
            cout << '1' << ' ' << '0' << endl;
        }
        else {
            fibonacci(a + 1);
            cout << cache[a] << ' ' << cache[a + 1] << endl;
        }
    }
    return 0;
}