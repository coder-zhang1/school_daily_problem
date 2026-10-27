// Competitive Programming Template (C++17)
// Author:zhang1
// Created:2026-10-27-17:44
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
  int n;
  cin >> n;
  int u = 0, d = 0;
  vector<int> a(n + 1);
  rep(i, 1, n) cin >> a[i];
  int sum = accumulate(a.begin() + 1, a.end(), 0);
  int l, r;
  cin >> l >> r;
  rep(i, 1, n)
  {
    if (a[i] > r)
      u += (a[i] - r);
    else if (a[i] < l)
      d += (l - a[i]);
  }
  if (sum > n * r || sum < n * l)
  {
    cout << "-1";
    return;
  }
  else
    cout << max(u, d);
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