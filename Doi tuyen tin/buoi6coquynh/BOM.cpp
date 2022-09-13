#include<bits/stdc++.h>
using namespace std;
long long a[1000005], s[1000005], maxV, n;
bool f[1000005];

int main()
{
    freopen("BOM.INP","r",stdin);
    freopen("BOM.OUT","w",stdout);
    cin>>n>>maxV;
    for (int i = 1; i<=n; i++)
    {
        cin>>a[i];
    }
    f[0]=true;
    s[0]=1;
    for (int i=1; i<=n; i++)
    {
        for (int j = maxV; j>= 1; j--)
        {
            if (j - a[i] >= 0)
                if (f[j - a[i]] == true)
                {
                    f[j] = true;
                    s[j] = s[j] + s[j - a[i]];
                }
        }
    }
    for (int i = maxV; i>= 1; i--)
    {
        if (f[i] == true)
        {
            cout << i << "\n" << s[i];
            return 0;
        }
    }
    cout << 0;
    return 0;
}


