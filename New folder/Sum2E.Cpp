#include<bits/stdc++.h>
using namespace std;
long long n, x, a[10000001], s, e;

int main()
{
    freopen("Sum2E.inp","r",stdin);
    freopen("Sum2E.out","w",stdout);
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
            s=a[i]+a[j];
            if(s==x)
                e++;
        }
    }
    cout<<e;
}

