#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll m, n, s, x;

int main()
{
    freopen("pencils.inp","r",stdin);
    freopen("pencils.out","w",stdout);
    cin>>n>>m;
    while(n>0)
    {
        n--;
        s++;
        if(s%m == 0)
            n++;
    }
    cout<<s;
}