#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], s;

bool nto(long long x)
{
    if (x < 2) return false;
    if (x <= 3) return true;
    if (x % 2 == 0) return false;
    for (int i=3;i<=sqrt(x);i+=2)
        if (x % i == 0)
            return false;
    return true;
}


int main()
{
    freopen("QueryPrime.inp","r",stdin);
    freopen("QueryPrime.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(nto(a[i])==true)
            s++;
    }
    cout<<s;
}
