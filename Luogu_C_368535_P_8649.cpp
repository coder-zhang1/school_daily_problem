// Competitive Programming Template (C++17)
// Author:zhang1
// Created:2026-10-27-17:23
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
  ll n, k, ans = 0;
  cin >> n >> k;
  vector<int> a(n + 1), cnt(k, 0);
  rep(i, 1, n) cin >> a[i];
  cnt[0] = 1;
  int sum = 0;
  rep(i, 1, n)
  {
    sum = (sum + a[i]) % k;
    ans += cnt[sum];
    cnt[sum]++;
  }
  cout << ans;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

#ifdef LOCAL
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
#endif

  solve();
}