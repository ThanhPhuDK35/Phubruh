#include<bits/stdc++.h>
#define ll long long
#define task ""
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define nx freopen(task".inp","r",stdin),freopen(task".out","w",stdout)
using namespace std;
ll n,res=-1e18,a[3][100005],f[100005][3][3];
int main()
{
    //nx;
    fast;
    cin>>n;
    for (int i=1; i<=2; i++)
        for (int j=1; j<=n; j++)
            cin>>a[i][j];
    for (int i=1; i<=n; i++)
    {
        f[i][0][0]=max(f[i-1][0][0],max(f[i-1][1][0],f[i-1][0][1]));
        f[i][1][0]=max(f[i-1][0][0],f[i-1][0][1])+a[1][i];
        f[i][0][1]=max(f[i-1][0][0],f[i-1][1][0])+a[2][i];
    }
    for (int i=1; i<=n; i++)
        res=max(res,max(f[i][0][1],f[i][1][0]));
    cout<<res;
}