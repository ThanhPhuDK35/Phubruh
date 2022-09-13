#include<bits/stdc++.h>
using namespace std;
long long n, a, e, x[10000001];

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

long long ser(long long n)
{
    long long tmp;
    long long  res = 0;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    return res;
}

int main()
{
    freopen("CPRIME.inp","r",stdin);
    freopen("CPRIME.out","w",stdout);
    cin>>n;
    if(nto(n) == true && nto(ser(n))==true)
        cout<<"1";
    else
        cout<<"0";
}
