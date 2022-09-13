#include <bits/stdc++.h>
using namespace std;
long long n,a[200001],k,q;
pair <long long,long long> b[200001];

int main()
{
    freopen("Max2Q.inp","r",stdin);
    freopen("Max2Q.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    b[2].first=a[1];
    b[2].second=a[2];
    for(int i=3;i<=n;i++)
    {
        if(b[i-1].first<=b[i-1].second)
        {
            if(b[i-1].first<a[i])
            {
                b[i].first=a[i];
                b[i].second=b[i-1].second;
            }
            else
            {
                b[i].first=b[i-1].first;
                b[i].second=b[i-1].second;
            }
        }
        else
        {
            if(b[i-1].second<a[i])
            {
                b[i].second=a[i];
                b[i].first=b[i-1].first;
            }
            else
            { 
                b[i].first=b[i-1].first;
                b[i].second=b[i-1].second;
            }
        }
    }
    while(k--)
    {
        cin>>q;
        cout<<b[q].first+b[q].second<<'\n';
    }
}

