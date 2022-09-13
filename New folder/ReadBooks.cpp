#include<bits/stdc++.h>
using namespace std;
long long n ,i ,a[500005], g, m = -1e9;

int main()
{
    freopen("ReadBooks.inp","r",stdin);
    freopen("ReadBooks.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for (i = 1;i <= n;i++)
    {
        cin>>a[i];
        g= g+a[i];
        m = max(m, a[i]);
    }
    if (g <= 2*m) g = m * 2;    
    cout<<g;
}
