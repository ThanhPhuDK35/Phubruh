#include<bits/stdc++.h>
using namespace std;
long long n, x, a[1000000], l[1000000], r[1000000], q;

int main()
{


    freopen("LienThong2.inp","r",stdin);
    freopen("LienThong2.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        cin>>a[i];
    }
    l[1]=1;
    for(int i=2; i<=n ;i++)
    {
        if(a[i]==a[i-1])
            l[i]=l[i-1];
        else
            l[i]=i;
    }
    r[n]=n;
    for(int i=n-1; i>=1; i--)
    {
        if(a[i]==a[i+1])
            r[i]=r[i+1];
        else
            r[i]=i;
    }
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        cin>>x;
        cout<<l[x]<<" "<<r[x]<<"\n";
    }
}
