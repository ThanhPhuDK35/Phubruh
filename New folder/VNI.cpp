#include<bits/stdc++.h>
using namespace std;
int n, a[1000001], ma[1000001];
long long profi[100001];

int main()
{
    freopen("VNI.inp","r",stdin);
    freopen("VNI.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    ma[n]=a[n];
    for(int i=n-1; i>=1; i--)
    {
        ma[i] = max(a[i], ma[i+1]);
    }
    profi[n]=0;
    for(int i=n-1; i>=1; i--)
    {
        profi[i] = (ma[i] - a[i]) + profi[i+1];
    }
    int q, t;
    cin>>q;
    while(q--)
    {
        cin>>t;
        cout<<profi[t]<<"\n";
    }
}
