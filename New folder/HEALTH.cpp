#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], c, maxa, mina;
map<long long, long long>s;
int main()
{
    freopen("HEALTH.inp","r",stdin);
    freopen("HEALTH.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    mina=1e18;
    maxa=1e18;
    for(int i=1; i<=n; i++)
    {
        if(s[a[i]] == 1)
        {
            if(maxa > a[i])
            {
                maxa=a[i];
                mina=i;
            }
        }
    }
    if(mina == 1e18)
    cout<<"-1";
    else
    cout<<mina;

}
