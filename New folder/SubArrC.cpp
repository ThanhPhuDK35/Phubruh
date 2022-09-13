#include<bits/stdc++.h>
using namespace std;
long long n, maxa, f[2000000], a[2000000];

int main()
{
    freopen("SubArrC.inp","r",stdin);
    freopen("SubArrC.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    f[1]=1; 
    maxa=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]>=a[i-1]) 
            f[i]=f[i-1]+1;
        else    
            f[i]=1;
        maxa=max(maxa,f[i]);
    }
    cout<<maxa<<'\n';
    for(int i=1;i<=n;i++)
    {
        if(f[i]==maxa)
        {
            cout<<i-maxa+1<<" "<<i;
            return 0;
        }
    }
}