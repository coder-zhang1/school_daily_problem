// Competitive Programming Template (C++17)
// Author:zhang1
// Created:2026-10-19-09:47
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

bool solve(const string &s)
{
  stack<char> st;
  for (auto c : s)
  {
    if (c == '(' || c == '{' || c == '[')
    {
      st.push(c);
    }
    else
    {
      if (st.empty())
        return false; 
      char t = st.top();
      if ((c == ')' && t == '(') ||
          (c == '}' && t == '{') ||
          (c == ']' && t == '['))
        st.pop();
      else
        return false;
    }
  }
  if (st.size())
    return false;
  else
    return true;
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

  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    bool ok = solve(s);
    if (ok)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}