#include <bits/stdc++.h>
using namespace std;
long long a[200001], b[200001], n, q, x, ma[200001], mi[200001];
map<long long, long long> s;

int main()
{
    cin>>n>>q;
    mi[0]=1e18;
    ma[0]=-1e18;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        ma[i]=max(ma[i-1], a[i]);
        mi[i]=min(mi[i-1], a[i]);
    }
    long long Max=-1e18, Min=1e18;
    for(int i = 1 ; i <= n ; i++)
    {
	    Max = max(ma[i], a[i]); 
	    Min = min(mi[i] , a[i]); 
	    b[i] = Max - Min;
        s[b[i]]++;
    }
    while(q--)
    {
        cin>>x;
        cout<<s[x]<<"\n";
    }
}