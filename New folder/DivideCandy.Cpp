#include<bits/stdc++.h>
using namespace std;
long long  a[1000000];

int main()
{
    freopen("DivideCandy.Inp","r",stdin);
    freopen("DivideCandy.Out","w",stdout);
    for(int i=1; i<=3; i++)
        cin>>a[i];
    sort(a+1, a+1+3);
    if(a[3]-(a[1]+a[2])>0)
       cout<<a[3]-(a[1]+a[2]);
    else
        cout<<(a[1]+a[2])-a[3];
}
