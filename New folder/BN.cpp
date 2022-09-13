#include<bits/stdc++.h>
using namespace std;
long long n, a[20000000], t, m;

int main()
{
    freopen("BN.inp","r",stdin);
    freopen("BN.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        t=0;
        for(int j=i-1; j>=1; j--)
        {
            if(a[i] == a[j])
            {
                cout<<j<<" ";
                t++;
                break;
            }
        }
        if(t==0)
            cout<<"0"<<" ";
    }
}
