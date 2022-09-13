#include<bits/stdc++.h>
using namespace std;
long long n, m;
string x, y, z;
map<string, string>s;

int main()
{
    freopen("BABELFISH.inp","r",stdin);
    freopen("BABELFISH.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        s[y]=x;
    }
    cin>>m;
    while(m--)
    {
        cin>>z;
        if(s[z] != "")
        {
            cout<<s[z]<<"\n";
        }
        else
        {
            cout<<"eh"<<"\n";
        }
    }
}
