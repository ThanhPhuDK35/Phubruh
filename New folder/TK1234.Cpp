#include <bits/stdc++.h>
using namespace std;
long long n, a[100000001], s, x1, x2, x3, x4;

int main()
{
    freopen("TK1234.Inp", "r", stdin);
    freopen("TK1234.Out", "w", stdout);
    cin>>n;
    for(int i=1; i <= n; i++)
    {
        cin>>a[i];
        if(a[i] == 1)
            x1++;
        else
        {
            if(a[i] == 2)
                x2++;
            else
            {
                if(a[i] == 3)
                    x3++;
                else
                {
                    if(a[i] == 4)
                        x4++;
                }
            }
        }
    }
    cout<<x1<<"\n"<<x2<<"\n"<<x3<<"\n"<<x4;
}
