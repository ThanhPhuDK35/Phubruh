#include<bits/stdc++.h>
using namespace std;
long long n, s, kq;
pair<long long, long long> a[1000001];

int main()
{
    freopen("dragon.inp","r",stdin);
    freopen("dragon.out","w",stdout);
    cin>>s>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=n; i++)
    {
        if(s>a[i].first)
        {
            s=s+a[i].second;
            kq++;
        }
        else
        {
            break;
        }
    }
    if(kq == n)
    cout<<"YES";
    else
    {
        cout<<"NO"<<"\n"<<n-kq;
    }
}
