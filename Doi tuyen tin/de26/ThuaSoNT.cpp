#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("ThuaSoNT.inp","r",stdin);
    freopen("ThuaSoNT.out","w",stdout);
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
