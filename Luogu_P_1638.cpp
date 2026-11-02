#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ll n, m;
  cin >> n >> m;
  vector<int> a(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  ll ans = n, sum = 0, x = 1, y = 1, tmp, ansl, ansr;
  tmp = n + 1;
  vector<int> cnt(m + 1, 0);
  while (x <= y && y <= n)
  {
    if (++cnt[a[y]] == 1)
      sum += 1;
    while (sum == m)
    {
      if (y - x + 1 < tmp)
      {
        tmp = y - x + 1;
        ansl = x;
        ansr = y;
      }
      if (--cnt[a[x]] == 0)
      {
        sum -= 1;
      }
      x++;
    }
    y++;
  }
  cout << ansl << " " << ansr;
}