#include<bits/stdc++.h>
using namespace std;
long long n, k, s;

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
    freopen("TWINS.inp","r",stdin);
    freopen("TWINS.out","w",stdout);
    cin>>n>>k;
    s=0;
    for(int i=3; i<=n; i++)
    {
        if(nto(i) == true && nto(i+k) == true && (i+k) <= n)
        {
            s++;
        }
    }
    cout<<s;
}

