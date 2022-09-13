#include <bits/stdc++.h>
using namespace std;
long long t, a[1000001], s;

long long tong(long long x)
{
    s=(x*(x+1)*(2*x+1))/6;
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("TONGBP.inp","r",stdin);
    freopen("TONGBP.out","w",stdout);
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
     for(int i=0; i<t; i++)
    {
        cout<<tong(a[i])<<'\n';
    }

}
