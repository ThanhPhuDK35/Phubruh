#include<bits/stdc++.h>
using namespace std;
long long n, a[10000010], m, s;

int main()
{
    freopen("MAX.inp","r",stdin);
    freopen("MAX.out","w",stdout);
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
    cout<<m;
}
