#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], l[10000001], t;

int main()
{
    freopen("DEFENSE.inp","r",stdin);
    freopen("DEFENSE.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        memset(a, 0, sizeof(a));
        memset(l, 0, sizeof(l));
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        l[0]=1;
        long long lmax, ans=1;
        for(int i=1; i<n; i++)
        {
            lmax=0;
            for(int j=0; j<i; j++)
            {
                if(a[i] > a[j])
                {
                    if(l[j] > lmax)
                    {
                        lmax = l[j];
                    }
                }
            }
            l[i]=lmax+1;
            ans=max(ans, l[i]);
        }
        cout<<ans<<"\n";
    }
}