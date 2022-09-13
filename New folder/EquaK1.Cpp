#include<bits/stdc++.h>
using namespace std;
long long a[100000090], n, k, s;

int main()
{

    freopen("EquaK1.inp","r",stdin);
    freopen("EquaK1.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i] == k)
            s++;
    }
    cout<<s;
}
