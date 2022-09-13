#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[1000005];
int main()
{
    freopen("MINMAXSEQ.inp", "r", stdin);
    freopen("MINMAXSEQ.out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int mina=*min_element(a+1,a+n+1);
    int maxa=*max_element(a+1,a+n+1);
    int vma=0,vmi=0,ans=n;
    for(int j=1;j<=n;j++)
    {
        if(a[j]==mina)
        {
            if(vma>0) ans=min(ans,j-vma+1);
            vmi=j;
        }
        else
        {
            if(a[j]==maxa)
            {
                if(vmi>0)
                {
                    ans=min(ans,j-vmi+1);
                }
                vma=j;
            }
        }
    }
    cout<<ans;
}
