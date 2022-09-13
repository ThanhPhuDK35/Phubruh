#include<bits/stdc++.h>
using namespace std;
long long n, dem;

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
    freopen("UocNT.inp","r",stdin);
    freopen("UocNT.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    dem=0;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            if(nto(i) == true)
                dem++;
            if(n/i != i && nto(n/i) == true)
                dem++;
        }
    }
    cout<<dem;
}
