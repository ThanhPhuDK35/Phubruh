#include<bits/stdc++.h>
using namespace std;
int n, a[200];

long long solve()
{
    int dem=0;
    for(int i=1; i<=n; i++)
    {
        while(a[i]%2 == 0)
        {
            dem++;
            a[i] /= 2;
        }
    }
    sort(a+1, a+1+n);
    long long tmp=1LL<<dem;
    long long ans=0;
    ans=tmp*a[n];
    for(int i=1; i<=n-1; i++)
        ans += a[i];
    return ans;
}

int main()
{
    freopen("DIMU.inp","r",stdin);
    freopen("DIMU.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++) cin>>a[i];
        cout<<solve()<<'\n';
    }
}
