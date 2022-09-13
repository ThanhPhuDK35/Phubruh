#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], b[10000001], c[10000001], t, a1, a2, a3, ax=0, bx=0, cx=0, l, r;
string s;

int main()
{
    freopen("MaxABC.inp","r",stdin);
    freopen("MaxABC.out","w",stdout);
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'a')
            ax++;
        if(s[i] == 'b')
            bx++;
        if(s[i] == 'c')
            cx++;
        a[i+1]=ax;
        b[i+1]=bx;
        c[i+1]=cx;
    }
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        cout<<max(a[r]-a[l-1],max(b[r]-b[l-1],c[r]-c[l-1]))<<'\n';
    }
}