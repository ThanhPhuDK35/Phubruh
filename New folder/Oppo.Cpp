#include <bits/stdc++.h>
using namespace std;
long long a, b, n, c, x;

int main()
{
    freopen("Oppo.inp","r",stdin);
    freopen("Oppo.out","w",stdout);
    cin>>x;
    while(x--)
    {
         cin>>a>>b>>c;
         n=abs(a-b)*2;
         if (a>n || b>n || c>n) 
            cout<<-1<<'\n';
         else
         { 
             if (c>n/2) 
                cout<<c-n/2<<'\n';
             else 
                cout<<c+n/2<<'\n';
        }

    }
}
