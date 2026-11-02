#include <bits/stdc++.h>
using namespace std;
long long  n, k;
vector<long long> a;
int check(long long mid)
{
  long long  sum = 0;
  for (int i = 1; i <= n; i++)
    sum = sum + a[i] / mid;
  return sum >= k;
}
int main()
{
  cin >> n >> k;
  a.assign(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  long long sum = accumulate(a.begin() + 1, a.end(), 0);
  if (sum < k)
  {
    cout << "0";
    return  0;
  }
  long long  l = 1, h = *max_element(a.begin() + 1, a.end());
  while (l < h)
  {
    int mid = (l + h + 1) >> 1;
    if (check(mid))
      l = mid;
    else
      h = mid - 1;
  }
  cout << l;
}