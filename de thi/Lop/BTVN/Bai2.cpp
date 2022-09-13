#include<bits/stdc++.h>
using namespace std;
long long n,s;
string st[1000001];

bool dx(string x)
{
    string t="";
    for(int i=x.size()-1; i>=0; i--)
    {
        t=t+x[i];
    }
    if(t==x)
        return true;
    else
        return false;
}



int main()
{
    freopen("Bai2.inp","r",stdin);
    freopen("Bai2.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>st[i];
        if(dx(st[i]) == true)
            s++;
    }
    cout<<s;
}
