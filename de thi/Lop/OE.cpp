#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001];

int main()
{
    freopen("OE.inp","r",stdin);
    freopen("OE.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1 ;i<=n; i++)
    {
        if(i%2 == a[i]%2)
        {
            cout<<"K";
            return 0;
        }
    }
    cout<<"D";
}
