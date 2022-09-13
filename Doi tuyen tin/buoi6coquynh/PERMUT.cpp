#include <bits/stdc++.h>
using namespace std;
long long demv=0,demk=0,k,n,a[105],mod=1000007;

int main()
{
    freopen("PERMUT.INP","r",stdin);
    freopen("PERMUT.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++) a[i]=i;
    do
    {
        demk=0;
        for (int j=1;j<=n;j++)
        {
            for(int i=1;i<=j;i++)
            if(a[i]>a[j])
            {
                demk++;
            }
        }
        if(demk==k)
        {
            demv=(demv+1)%mod;
        }
    }
    while(next_permutation(a+1,a+n+1));
    cout<<demv;
}
