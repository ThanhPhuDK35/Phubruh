#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
ll n, a[200001], s[200001], s1, l, r, m, kq = 1e12, nn;

void sub1()
{
    ll mi=1e18;
    for (int i=1; i<=n; i++)
    {
        for (int j=i+1; j<=n; j++)
        {
            for (int k=j+1; k<=n; k++)
            {
                if ((i+j-i+k-j)==n)
                mi=min(mi,max({s[i],s[j]-s[i],s[k]-s[j]})-min({s[i],s[j]-s[i],s[k]-s[j]}));
            }
        }
    }
    cout<<mi;
}

int main()
{
    freopen("chiakeo.inp","r",stdin);
    freopen("chiakeo.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n;
    s[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    if(n <= 200) sub1();
    else
    {
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
}
