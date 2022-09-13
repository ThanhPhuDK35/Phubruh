#include <bits/stdc++.h>
using namespace std;
long long k=0, n;

int main()
{
    freopen("GNum.Inp", "r", stdin);
    freopen("GNum.Out", "w", stdout);
    cin >> n;
    if(n<=1)
    {
        cout << "NO";
        return 0;
    }
    for(int i = 2;i<=sqrt(n);i++)
    while(n%i==0)
    {
        n/=i;
        k++;

    }
        if (n>1)
    {
        k++;
    }
    cout<<k;
}

