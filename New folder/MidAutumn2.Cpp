#include<bits/stdc++.h>
using namespace std;
long long n, a[1001], s, k, m = 0;

int main()
{
    freopen("MidAutumn2.inp","r",stdin);
    freopen("MidAutumn2.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    s=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(abs(j-i) <= k)
                {
                    s = a[i]+a[j];
                    if(m < s)
                       m = s;
                }
        }
    }
    cout<<m;
}
