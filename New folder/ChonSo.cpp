#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], e=0, x, y, d1, d2, ch;

int main()
{
    freopen("ChonSo.inp","r",stdin);
    freopen("ChonSo.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i] % 3 == 1) d1++;
        if(a[i] % 3 == 2) d2++;
        if(a[i] % 3 == 0) ch++;
    }
    cout<<1LL*d1*d2+ch*(ch-1)/2;

}
