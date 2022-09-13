#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
ll n, a[200001], s[200001], s1, l, r, m, kq = 1e12, nn;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n;
    s[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    for (int i = 3; i < n; i++)
    {
        l = 2; r = i-1;
        while (l <= r)
        {
            m = (l+r)/2;
            s1 = max(s[m], max(s[i] - s[m], s[n] - s[i])) - min(s[m], min(s[i] - s[m], s[n] - s[i]));
            kq = min(kq, s1);
            if (s[m] == s[i] - s[m]) break;
            if (s[m] < s[i] - s[m])
            {
                l = m+1;
            }
            else 
            {
                r = m-1;
            }
        }
    }
    cout << kq;
}
