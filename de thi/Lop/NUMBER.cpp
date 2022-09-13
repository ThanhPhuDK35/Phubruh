#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], s, kq, e;

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
    freopen("NUMBER.inp","r",stdin);
    freopen("NUMBER.out","w",stdout);
    s=0;
    kq=0;
    e=0;
    while(cin>>n)
    {
        s++;
        a[s]=n;
        if(nto(a[s]) == true && nto(a[s-2]) == true && e == 0)
        {
               kq=s-1;
               e++;
        }
    }
    cout<<kq;
}
