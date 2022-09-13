#include<bits/stdc++.h>
using namespace std;
long long n, s, x[10000001], y[100000001];

int main()
{
    freopen("dragon.inp","r",stdin);
    freopen("dragon.out","w",stdout);
    cin>>s>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(s>x[i])
        {
            s=s+y[i];
        }
        else
        {
            cout<<"NO"<<"\n";
            cout<<n-i+1;
            return 0;
        }
    }
    cout<<"YES";
}
