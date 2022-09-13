#include <bits/stdc++.h>
#define ll long long
using namespace std;
string st;
char s[1000000001];
int m=0, n;

int main()
{
    freopen("EraseABC.INP","r",stdin);
    freopen("EraseABC.OUT","w",stdout);
    cin>>n;
    cin>>st;
    if(n < 3)
    {
        cout<<n;
        return 0;
    }
    s[1]=st[0]; s[2] = st[1]; m=2;
    for(int i=2; i<n; i++)
    {
        if(st[i] == 'c')
            if(m >= 2 and s[m-1] == 'a' and s[m] == 'b')
        {
            m=m-2;
            continue;
        }
        m++; s[m] = st[i];
    }
    cout<<m;
}
