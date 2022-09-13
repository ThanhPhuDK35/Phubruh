#include <bits/stdc++.h>
using namespace std;
long long a, b, s, e, f;

int main()
{
    freopen("N23.inp","r",stdin);
    freopen("N23.out","w",stdout);
    cin>>a>>b;
    s=0;
    e=1;
    while(e <= b)
    {
        f = e;
        while(f <= b)
        {
            if(a <= f && f <= b)
                s++;
            f=f*3;
        }
        e=e*2;
    }
    cout<<s;
}
