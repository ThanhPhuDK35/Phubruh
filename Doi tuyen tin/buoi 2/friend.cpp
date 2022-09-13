#include <bits/stdc++.h>
using namespace std;
long long n, k, a[10000001], s;
map<long long, long long> fre;

int main()
{
    freopen("friend.inp", "r", stdin);
    freopen("friend.out", "w", stdout);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fre[a[i]]++;
    }
    s = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k - a[i])
        {
            s += (fre[a[i]] - 1);
        }
        else
        {
            s += (fre[k - a[i]]);
        }
    }
    cout << s/2;

}
