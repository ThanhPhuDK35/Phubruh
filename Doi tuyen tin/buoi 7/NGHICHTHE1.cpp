#include <bits/stdc++.h>
using namespace std;
long long n, a[101], s;

int main()
{
    freopen("NGHICHTHE1.Inp", "r", stdin);
    freopen("NGHICHTHE1.Out", "w", stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        s=0;
        for(int j=i; j>=1;j--)
        {
            if(a[j] > a[i])
                s++;
        }
        cout<<s<<" ";
    }
}
