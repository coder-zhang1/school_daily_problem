// Competitive Programming Template (C++17)
// Author:zhang1
// Created:2026-10-12-17:04
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
    int cnt1 = 0, cnt0 = 0;
    vector<string> a;
    vector<int> ans;
    string tmp;
    while (cin >> tmp)
    {
        a.push_back(tmp);
    }
    int N = a.size();
    ans.push_back(N);
    if (!a.empty() && !a[0].empty() && a[0][0] == '1')
        ans.push_back(0);
    for (const auto &s : a)
    {
        for (const auto &c : s)
        {
            if (c == '1')
            {
                if (cnt0)
                    ans.push_back(cnt0);
                cnt1++;
                cnt0 = 0;
            }
            else if (c == '0')
            {
                if (cnt1)
                    ans.push_back(cnt1);
                cnt0++;
                cnt1 = 0;
            }
        }
    }
    if (cnt1)
        ans.push_back(cnt1);
    if (cnt0)
        ans.push_back(cnt0);
    for (auto num : ans)
        cout << num << " ";
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
