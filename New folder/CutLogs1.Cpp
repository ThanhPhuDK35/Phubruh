#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s, x;

int main()
{
    freopen("CutLogs1.inp","r",stdin);
    freopen("CutLogs1.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for(int i=1; i<=n; i++)
    {
        if(a[i]>x)
        {
            if(a[i]%x==0)
            {
                s=s+a[i]/x-1;
            }
            else
                s=s+a[i]/x;
        }
    }
    cout<<s;
}
