#include<bits/stdc++.h>
using namespace std;
long long a, b, s;

int main()
{
    freopen("bears.inp","r",stdin);
    freopen("bears.out","w",stdout);
    cin>>a>>b;
    while(a <= b)
    {
        a=a*3;
        b=b*2;
        s++;
    }
    cout<<s;
}