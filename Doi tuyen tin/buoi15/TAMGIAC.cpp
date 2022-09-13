#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long n, k, a[10000001], b[10000001];
int dem;

int main()
{
    freopen("tamgiac.inp","r",stdin);
	freopen("tamgiac.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-2;i++)
    {
        for(int j=i+2;j<=n;j++)
        {
            ll k=0;
            for(int z=i;z<=j;z++)
            {
                for(int x=i;x<=j;x++)
                    for(int y=i;y<=j;y++)
                    {
                        if(a[x]+a[y]<a[z] || a[z]+a[y]<a[x] || a[x]+a[z]<a[y])
                            k=1;
                    }            
            }
            if(k!=1)
            {
                dem=max(dem,j-i);
            }
        }
    }
    cout<<dem;
}