#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m, maxa;
string d[100005], tmp;
char ch;
bool check(int k)
{
    for(int i = 2; i <= m; i++)
    {
        string x, y;
        x = d[i - 1].substr(0, n - k);
        y = d[i].substr(0, n - k);
        if(x == y) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("delrow.INP","r",stdin);
    freopen("delrow.OUT","w",stdout);
    cin >> n >> m;
    for(int i = 1; i <= m; i++) d[i] = "";
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> ch;
            d[j] += ch;
        }
    }
    for(int j = 1; j <= m; j++)
    {
        reverse(d[j].begin(), d[j].end());
    }
    sort(d + 1, d + 1 + m);
    int l, r, mid, ans = 0;
    l = 1, r = n - 1;
    while(l <= r)
    {
        mid = (l + r) / 2;
        if(check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans;
}
