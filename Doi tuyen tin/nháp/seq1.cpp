#include <bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005],n,nmax=-1e9;
int main()
{
    //freopen("seq1.inp","r",stdin);
    //freopen("seq1.out","w",stdout);
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
            cin>>a[i];
    b[0]=1e9;
    for(int i=1;i<=n;i++)
        b[i]=min(b[i-1],a[i]);
    for(int i=2;i<=n;i++)
        nmax=max(nmax,a[i]-b[i-1]);
    cout<<nmax;
    return 0;
}
