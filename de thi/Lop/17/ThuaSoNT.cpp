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
int main()
{
    //freopen("ThuaSoNT.inp","r",stdin);
    //freopen("ThuaSoNT.out","w",stdout);
    long long n;
    cin >> n;
    if(n<=1)
    {
        cout << " ";
        return 0;
    }
    for(int i = 2;i<=sqrt(n);i++)
    while(n%i==0)
        {
        n/=i;
        if (n>=i)
            cout << i << ".";
        else
            cout << i;
    }
    if (n>1)
        cout << n;
    return 0;
}
