#include<bits/stdc++.h>
using namespace std;
long long n, a[10000010], m, s, b[100000000], e=0;

int main()
{
    freopen("XHNH4.inp","r",stdin);
    freopen("XHNH4.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
     s=1;
     for(int j=i+1; j<=n; j++)
     {
         if(a[i]==a[j])
            s++;
     }
     if(s>m)
        m=s;
    }
    cout<<m<<"\n";
    for(int i=1; i<=n; i++)
    {
     s=1;
     for(int j=i+1; j<=n; j++)
     {
         if(a[i]==a[j])
            s++;
     }
     if(s==m)
     {
        e++;
        b[e]=a[i];

     }

    }
    sort(b+1, b+e+1);
    for(int i=1; i<=e; i++)
    {
        cout<<b[i]<<" ";
    }

}
