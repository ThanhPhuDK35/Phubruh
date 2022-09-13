#include<bits/stdc++.h>
using namespace std;
string a;
long long l, n;
int main()
{
    freopen("ABBA.inp","r",stdin);
    freopen("ABBA.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>a;
        l=a.size()-1;
        if(a[0] == a[l]) cout<<"0"<<"\n";
        else cout<<"1"<<"\n";
    }
}