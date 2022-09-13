#include<bits/stdc++.h>
using namespace std;
long long a, b, x, y, s=0;

int main()
{
    freopen("CHIAHET.inp","r",stdin);
    freopen("CHIAHET.out","w",stdout);
    cin>>a>>b>>x>>y;
    for(int i=a; i<=b; i++)
    {
        if(i%x==0 || i%y==0)
            s++;
    }
    cout<<s;
}
