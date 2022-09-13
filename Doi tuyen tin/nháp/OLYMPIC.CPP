#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], m, l[10000001], r[100000001],v, d, b;

int main()
{
    //freopen("OLYMPIC.inp","r",stdin);
    //freopen("OLYMPIC.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=m; i++)
    {
        cin>>l[i]>>r[i];
    }
    for(int i=1; i<=m; i++)
    {
        v=0;
        b=0;
        d=0;
        for(int j=l[i] ; j<=r[i] ; j++)
        {
            if(a[j]==1)
                v++;
            else
            {
                if(a[j] == 2)
                    b++;
                else
                    d++;
            }
        }
        cout<<v<<" "<<b<<" "<<d<<"\n";
    }
}
