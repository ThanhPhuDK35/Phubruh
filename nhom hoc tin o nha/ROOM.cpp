#include<bits/stdc++.h>
using namespace std ;
long long n, a, b, h, g;

int main ()
{
    freopen("ROOM.inp","r",stdin);
    freopen("ROOM.out","w",stdout);
    cin>>n>>a>>b;
    n=n*6;
    if(a*b >= n)
    {
        cout<<n<<"\n";
        cout<<a<<" "<<b;
        return 0 ;
    }
    h=max(a,b);
    g=min(a,b);
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        if(g <= i && h <= n/i)
        {
            cout << n << '\n' ;
            cout << i << " " << n/i ;
            return 0 ;
        }
    }
}


    