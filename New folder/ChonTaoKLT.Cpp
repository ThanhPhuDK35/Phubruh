#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s, p[10000001];

int main()
{
    //freopen("ChonTaoKLT.inp","r",stdin);
    //freopen("ChonTaoKLT.out","w",stdout);
    cin>>n;
    for(int i=1; i <= n; i++)
    {
        cin>>a[i];
        s=s+a[i];
        p[a[i] % 3]++;
    }
    if(s%3==0) cout<<n;
    if(s%3 == 0)
    {
        if(p[1] > 0) cout<<n-1;
        else
            cout<<n-2;
    }
    if(s%3 == 2)
    {
        if(p[2] > 0)
            cout<<n-1;
        else
            cout<<n-2;
    }

}
