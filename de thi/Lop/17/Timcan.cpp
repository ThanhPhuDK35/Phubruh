#include <bits/stdc++.h>
using namespace std;
long long n;

int main()
{
    freopen("Timcan.inp","r",stdin);
    freopen("Timcan.out","w",stdout);
    cin>>n;
    if(n==1)
    {
        cout<<"1"<<"\n";
        cout<<"9";
    }
    else
    {
        cout<<"1";
        for(int i=1; i<=n-1;i++)
        {
            cout<<"0";
        }
        cout<<"\n";
        for(int i=1; i<=n; i++)
        {
            cout<<"9";
        }
    }
}
