#include<bits/stdc++.h>
using namespace std;
long long x[1000000], a, b, c, d;

int main()
{
    freopen("GenNum.Inp","r",stdin);
    freopen("GenNum.Out","w",stdout);
    cin>>a>>b>>c>>d;
    x[1]=a;
    x[2]=b;
    x[3]=c;
    x[4]=d;
    x[5]=a+b;
    x[6]=a+c;
    x[7]=a+d;
    x[8]=b+c;
    x[9]=b+d;
    x[10]=c+d;
    x[11]=a+b+c;
    x[12]=a+b+d;
    x[13]=a+c+d;
    x[14]=b+c+d;
    x[15]=a+b+c+d;

    sort(x+1, x+1+15);
    cout<<x[1]<<" ";
    for(int i=2; i<=15; i++)
    {
        if(x[i] != x[i-1])
           cout<<x[i]<<" ";
    }

}
