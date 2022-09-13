#include<bits/stdc++.h>
using namespace std;
long long t, n, a[10000001], s;

int main()
{
    freopen("TONGCHAN.inp","r",stdin);
    freopen("TONGCHAN.out","w",stdout);
    cin>>n;
    t=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        t=t+a[i];
    }
    s=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((t-(a[i]+a[j]))%2==0)
                s++;
        }
    }
    cout<<s;
}
