#include<bits/stdc++.h>
using namespace std;
long long m, s, a[10000001];

int main()
{
    freopen("TIMSO.INP","r",stdin);
    freopen("TIMSO.OUT","w",stdout);
    cin>>m;
    if(m < 3)
        cout<<"-1";
    else
    {
        a[0]=0;
        for(int i=1; i<=m; i++)
        {
            a[i]=i+a[i-1];
        }
        for(int i=1; i<=m; i++)
        {
            for(int j=2; j<=m; j++)
            {
                if(a[i]*2 == a[j])
                    cout<<j<<" ";
            }
        }
    }
}
