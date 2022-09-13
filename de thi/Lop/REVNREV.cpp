#include <bits/stdc++.h>
using namespace std;
long long n, k, u, v, l, r, b[100001], d=0, ck=0, a[1000001];

int main()
{
    freopen("REVNREV.inp","r",stdin);
    freopen("REVNREV.out","w",stdout);
    cin>>n>>k>>u>>v>>l>>r;
    for(int i=1; i<=n; i++)
    {
        a[i]=i;
        b[i]=i;
    }
    while(1)
    {
        ck=0;
        reverse(a+u, a+v+1);
        reverse(a+l, a+r+1);
        d++;
        for(int i=1; i<=n; i++)
        {
            if(a[i] != b[i])
                ck=1;
        }
        if(ck == 0)
            break;
    }
    k=k%d;
    while(k--)
    {
        reverse(a+u, a+v+1);
        reverse(a+l, a+r+1);
    }
    for(int i=1; i<=n; i++)
        cout<<a[i]<<"\n";
}