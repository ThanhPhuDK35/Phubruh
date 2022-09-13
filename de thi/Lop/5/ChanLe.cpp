#include<bits/stdc++.h>
using namespace std;
long long n, a[110000000], m=0, s;

int main()
{
    freopen("ChanLe.inp","r",stdin);
    freopen("ChanLe.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<n; i++)
    {

       if((a[i]+a[i+1]) % 2 ==1)
        s=a[i]+a[i+1];


        if(s>m)
            m=s;
    }
    if(m>0)
    cout<<m;
    else
        cout<<"-1";

}
