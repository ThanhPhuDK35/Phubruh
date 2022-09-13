#include<bits/stdc++.h>
using namespace std;
long long n, f[10000001], i, m;

bool nto(long long  x)
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
    //freopen("fibo.inp","r",stdin);
    //freopen("fibo.out","w",stdout);
    cin>>n;
    f[0] = 1;
    f[1] = 1;
    i=1;
    while(f[i] < n)
    {
        i++;
        f[i]=f[i-1]+f[i-2];
        if(f[i] > n)
        {
            break;
        }
        if(nto(f[i])==true)
        {
            if(m<f[i])
                m=f[i];
        }
    }
    cout<<m;
}
