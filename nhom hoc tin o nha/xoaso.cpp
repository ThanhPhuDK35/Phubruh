#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(i,n) for(ll i = 0; i < n; i++)
#define f1(i,n) for(ll i = 1; i <= n; i++)
ll k, tmp = 0;
deque <char> ans;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    cin>>k>>s;
    ans.push_back(s[0]);
    f1 (i, s.size()-1)
    {
        while (k && s[i] > ans.back() && ans.size())
        {
            k--;
            ans.pop_back();
            if (ans.empty()) break;
        }
        ans.push_back(s[i]);
    }
    while(k) ans.pop_back(), k--;
    for (auto x:ans) cout << x;
}
