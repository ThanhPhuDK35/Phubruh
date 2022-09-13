#include<bits/stdc++.h>
using namespace std;
string st;
long long s, x, n;

int main()
{
    freopen("ExpressPlus.inp","r",stdin);
    freopen("ExpressPlus.out","w",stdout);
    cin>>st;
    n=st.size();
    st=st+'+';
    s=0;
    x=0;
    for(int i=0; i<=n; i++)
    {
        if(st[i]=='+')
        {
            s=s+x;
            x=0;
        }
        else
            x=x*10+(st[i]-'0');
    }
    cout<<s;
}
