#include<bits/stdc++.h>
using namespace std;
long long n, d, a[1000001], s;

int main()
{
    freopen("Shoes.inp", "r", stdin);
    freopen("Shoes.out", "w", stdout);
    cin>>n>>d;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    s=0;
    for(int i=2; i<=n; i+=2)
    {
        if(abs(a[i] - a[i-1]) <= d)
        {
            s++;
        }
        else
        {
            if(a[i+1] - a[i] <= d)
            {
                s++;
                i++;
            }
        }
    }
    cout<<s;
}