// Competitive Programming Template (C++17)
// Author:zhang1
// Created:2026-10-19-19:22
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
const int INF = 0x3f3f3f3f;
const ll LINF = (ll)4e18;
const ll MOD = 1e9 + 7;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ft first
#define sd second
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (ll i = (a); i <= (b); i++)
#define per(i, a, b) for (ll i = (a); i >= (b); i--)

int dir_4[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

void solve()
{
    int L, n;
    cin >> L >> n;
    vector<int> a(n + 1, 0);
    rep(i, 1, n) cin >> a[i];
    int mn = 0, mx = 0;
    rep(i, 1, n) mn = max(mn, min(a[i], L - a[i] + 1));
    rep(i, 1, n) mx = max(mx, max(a[i], L - a[i] + 1));
    cout << mn << " "<< mx;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    std::cout.tie(nullptr);

#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    solve();
}