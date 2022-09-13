#include<bits/stdc++.h>
using namespace std;
long long n, x, a[10000001], s, e;

int main()
{
    freopen("Sum3E.inp","r",stdin);
    freopen("Sum3E.out","w",stdout);
    cin>>n>>x;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    e=0;
    s=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n;j++)
        {
            for(int k=j+1; k<=n; k++)
            {
            s=a[i]+a[j]+a[k];
            if(s==x)
                e++;
            }

        }
    }
    cout<<e;
}

