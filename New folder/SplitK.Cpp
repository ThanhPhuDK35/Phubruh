#include <bits/stdc++.h>
using namespace std;
long long t, a[10000][10000], n, k, dem;

int main()
{
    freopen("SplitK.Inp", "r", stdin);
    freopen("SplitK.Out", "w", stdout);
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        dem = 1;
        cin>>n>>k;
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
        for(int j=1; j<n; j++)
        {
            if(a[i][j] > a[i][j+1]) dem++;
        }
    if(dem>k) cout<<"No"<<"\n";
    else
        cout<<"Yes"<<"\n";
    }
}
