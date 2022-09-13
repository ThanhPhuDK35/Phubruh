#include<bits/stdc++.h>
using namespace std;
string s, e;
long long x, c;

long long palin(string y)
{
    long long s=0;
    string x = "";
    int n = y.length();
    for(int i = n-1; i >=0; i--)
    {
       x = x + y[i];
    }
    if(x==y)
        return true;
    else
        return false;

}

int main()
{
    cin>>s;
    e = "";
    c=0;
    for(int i=0; i<s.size(); i++)
    {
        e=e+s[i];
        if(palin(e) == true)
        {
            s++;
            b[c]=i+1;
            c++;
        }
    }
    cout<<s<<"\n";
    for(int i=1; i<=n; i++)
    {
        cout<<b[i]<<"\n";
    }


}
