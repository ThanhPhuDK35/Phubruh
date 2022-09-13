#include<bits/stdc++.h>
using namespace std;
int n,q,a[100005];
int main()
{
    freopen("SMPalin.INP","r",stdin);
    freopen("SMPalin.OUT","w",stdout);
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    cin>>q;
    while(q--)
    {
    int s = -1e18;
    cin>>n;
    for(int i = 1;i <= n;i++)
        cin>>a[i];
    for(int i = 1;i <= n / 2;i++)
        s = max(s, a[i] +a[n - i + 1]);
    cout<<s<<'\n';
    }
}
