#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, a[1000005], s[1000005], Min[1000005],q,M[1000005];
int main()
{
    freopen("SumCMax2.INP","r",stdin);
    freopen("SumCMax2.OUT","w",stdout);
     ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cin>>n;
    for(long long i = 1;i <= n;i++)
        cin>>a[i];
    cin>>q;
    s[0] = 0;
    for(int i = 1;i <= n;i++)
        s[i] = s[i - 1] + a[i];
     for(int i = 1;i <= n;i++)
        Min[i] = min(Min[i - 1], s[i]);
    for(int i = 1;i <= n;i++)
        M[i] = s[i] - Min[i-1];
    while(q--)
    {
    cin>>k;
    cout<<M[k]<<'\n';
    }
}
