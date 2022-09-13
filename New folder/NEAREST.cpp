#include<bits/stdc++.h>
using namespace std;
long long n, q, a[1000000], b[100000], m, s, x;

int getans(int x)
{
    if(x<=a[1])
        return a[1]-x;
    if(x >= a[n])
        return x-a[n];
    int dau=1, cuoi=n, giua, id;
    while(dau <= cuoi)
    {
        giua = (dau+cuoi)/2;
        if(a[giua] <= x)
        {
            id=giua;
            dau=giua+1;
        }
        else
        {
            cuoi=giua-1;

        }
    }
    return min(x-a[id], a[id+1]-x);
}


int main()
{
    freopen("NEAREST.inp","r",stdin);
    freopen("NEAREST.out","w",stdout);
    cin>>n>>q;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=q; i++)
    {
        cin>>b[i];
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=q; i++)
    {
        cout<<getans(b[i])<<"\n";
    }
}
