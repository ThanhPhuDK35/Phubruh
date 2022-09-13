#include <bits/stdc++.h>
using namespace std;

bool Is_prime(int x)
{
    if(x<2)
        return false;
    for(int i =2; i<=sqrt(x); i++)
        if(x%i==0)
        return false;
    return true;
}

long long thang(long long x)
{
    long long s=1;
    for(int i=2; i<=x; i++)
    {
        s=s*i;
    }
    return s;
}
int main()
{
    long long n;
    cin >> n;
    for(int i = 2;i<=sqrt(thang(n));i++)
    while(n%i==0)
        {
        n/=i;
        if (n>=i)
            cout << i << "*";
        else
            cout << i;
    }
    if (n>1)
        cout << n;
    return 0;
}
