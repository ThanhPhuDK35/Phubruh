#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], b[100000001], s, m, p, x, ma;

int main()
{
    freopen("LUACHON.inp","r",stdin);
    freopen("LUACHON.out","w",stdout);
    cin>>n;
    for(int i=1; i<= n; i++)
    {
        cin>>a[i]>>b[i];
        m=min(m, a[i]);
        p=max(p, b[i]);
    }
    for(int i=m; i<=p; i++)
    {
        s=0;
        for(int j=1; j<=n; j++)
        {
            if(i >= a[j] && i <= b[j])
            {
                s++;
            }
        }
        if(ma < s)
        {
            ma=s;
            x=i;

        }

    }
    cout<<ma<<"\n";
    for(int i=1; i<=n; i++)
    {
        if(x >= a[i] && x <= b[i])
            cout<<i<<"\n";
    }
}
