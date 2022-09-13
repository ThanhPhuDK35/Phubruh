#include <bits/stdc++.h>
using namespace std;
long long a[10000001], s, m, b, c;
string n;

int main()
{
    freopen("CHUSO.INP","r",stdin);
    freopen("CHUSO.OUT","w",stdout);
    cin>>n;
    c=1;
    for(int i=n.size()-1; i>=0; i--)
    {
        b = n[i] - 48;
        s=s+b;
        a[c] = b;
        m=max(m, a[c]);
        c++;
    }
    cout<<s<<"\n"<<m<<"\n";
    for(int i=1; i<=c-1; i++)
    {
        if(m == a[i])
            cout<<i<<" ";
    }
}
