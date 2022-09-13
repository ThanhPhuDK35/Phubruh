#include<bits/stdc++.h>
using namespace std;
long long n, a[109][109];

int main()
{
    freopen("TAOBANG.inp","r",stdin);
    freopen("TAOBANG.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
             cin>>a[i][j];
    cout<<n<<"\n";
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
             {cout<<a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j-1]+a[i][j+1]<<" "; }cout<<"\n";}
}