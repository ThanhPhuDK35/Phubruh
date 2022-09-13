#include<bits/stdc++.h>
using namespace std;
long long n, m, s;
pair<long long , long long> a[1000001];

int main()
{
    freopen("Award.Inp","r",stdin);
    freopen("Award.Out","w",stdout);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    m=a[0].first;
    for(int i=1; i<n; i++)
    {
        if(m<a[i].first)
            m=a[i].first;
    }
    s=0;
    for(int i=0; i<n; i++)
    {
        if(a[i].first==m && a[i].second>=5)
            s++;
    }
    cout<<s;

}
