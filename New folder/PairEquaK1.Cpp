#include<bits/stdc++.h>
using namespace std;
long long a[100000090], n, k, s;

int main()
{

    freopen("PairEquaK1.inp","r",stdin);
    freopen("PairEquaK1.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(a[i] + a[j] == k)
                s++;
        }
    }
    cout<<s;
}
