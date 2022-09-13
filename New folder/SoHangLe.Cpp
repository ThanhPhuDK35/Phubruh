#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s=0;

int main()
{
    freopen("SoHangLe.inp","r",stdin);
    freopen("SoHangLe.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]%2 != 0)
            s++;
    }
    cout<<s;
}
