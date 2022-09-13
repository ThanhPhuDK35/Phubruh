#include <bits/stdc++.h>
using namespace std;
long long n, x, y;
int main()
{
    freopen("POPCANDY.INP","r",stdin);
    freopen("POPCANDY.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        long long h=x+y;
        if (h%3!=0)
        {
            cout<<"NO"<<'\n';
        }
        else
        {
            if (min(x,y)*2>=max(x,y))
                cout<<"YES"<<'\n';
            else 
                cout<<"NO"<<'\n';
        }
    }
}