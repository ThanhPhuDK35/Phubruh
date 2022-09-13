#include<bits/stdc++.h>
using namespace std;
string s, e;
long long x, c, b[100000001], n;

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
    cin>>n;
    cin>>s;
    e = s[0];
    c=0;
    for(int i=1; i<n; i++)
    {
        e=e+s[i];
        if(palin(e) == true)
        {
            e=s[i+1];
            x++;
            b[c]=i+1;
            c++;
        }
    }
    cout<<x<<"\n";
    for(int i=1; i<=c; i++)
    {
        cout<<b[i]<<"\n";
    }


}
