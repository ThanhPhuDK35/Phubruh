#include <bits/stdc++.h>
using namespace std;
long long k,n,m[10000005], i=1, e;

bool nt(long long x)
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
    freopen("DAYNT.inp", "r", stdin);
    freopen("DAYNT.out", "w", stdout);
    cin>>k;
    while (cin>>n)
    {
        m[i] = n;
        i++;
    }
    sort(m+1, m+i);
    for(int j=1; j<=i-1; j++)
    {
        if(nt(m[j]) == true && m[j] != m[j-1])
        {
            cout<<m[j]<<" ";
            e++;
        }
        if(e == k)
            return 0;
    }
}
