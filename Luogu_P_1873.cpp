#include <bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> a;
long long check(long long mid)
{
  long long sum = 0;
  for (long long i = 1; i <= n; i++)
  {
    if (a[i] > mid)
      sum = sum + a[i] - mid;
  }
  return sum >= m;
}
int main()
{
  cin >> n >> m;
  a.assign(n + 1, 0);
  for (long long i = 1; i <= n; i++)
    cin >> a[i];
  long long l = 0, h = *max_element(a.begin(), a.end());
  while (l < h)
  {
    long long mid = (l + h + 1) >> 1;
    if (check(mid))
      l = mid;
    else
      h = mid - 1;
  }
  cout << l;
}