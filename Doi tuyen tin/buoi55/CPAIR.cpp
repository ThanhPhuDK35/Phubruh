#include<bits/stdc++.h>
using namespace std;
long long n, k, a[1000005], b[1000005], dem=0;

int main ()
{
	freopen("CPAIR.inp","r",stdin);
	freopen("CPAIR.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    if(k%2==0)
    {
        dem=dem+b[k/2]*(b[k/2]-1)/2;
        b[k/2]=0;
        for(int i=1; i<=n; i++)
        {
            dem+=b[k-a[i]]*b[a[i]];
            b[a[i]]=0;
        }
        cout<<dem;
        return 0;
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
             dem+=b[k-a[i]]*b[a[i]];
             b[a[i]]=0;
        }
        cout<<dem;
        return 0;
    }
}


