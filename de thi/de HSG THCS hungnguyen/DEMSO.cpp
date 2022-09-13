#include<bits/stdc++.h>
using namespace std;
long long a,b,tam1,tam2,v;
string t,f;

long long so(string t)
{
    long long s=0;
    for(int i=0;i<t.length();i++)
        s=s*10+t[i]-48;
    return s;
}

string xau(long long a)
{
    string t="";
    while(a>0)
    {
        t=char(a%10+48)+t;
        a/=10;
    }
    return t;
}

int main()
{
    freopen("demso.inp","r",stdin);
    freopen("demso.out","w",stdout);
    cin>>a>>b;
    if(a<10 && b>10)
        v+=9-a;
    else if(a<10 && b<10)
    {
        cout<<b-a+1;
        return 0;
    }
    t=xau(a),f=xau(b);
    t[t.size()-1] = t[0];
    f[f.size()-1] = f[0];
    tam1 = so(t);
    tam2 = so(f);
    v += tam2/10-tam1/10+1;
    if(tam1<a)
        v--;
    if(tam2>b)
        v--;
    cout<<v;
}

