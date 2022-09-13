#include<bits/stdc++.h>
using namespace std;
long long a, b, c, s, x, m, e[10000001];

int main()
{
    freopen("UnEqual.Inp","r",stdin);
    freopen("UnEqual.Out","w",stdout);
    cin>>a>>b>>c;
    e[1]=a;
    e[2]=b;
    e[3]=c;
    e[4]=a+b;
    e[5]=a+c;
    e[6]=b+c;
    e[7]=a+b+c;
    sort(e+1, e+1+7);
    for(int i=1; i<=e[7]+1; i++)
    {
        if(i != e[1] && i != e[2] && i != e[3] && i != e[4] && i != e[5] && i!= e[6] && i != e[7])
        {
            cout<<i;
            break;
        }
    }
}
;
