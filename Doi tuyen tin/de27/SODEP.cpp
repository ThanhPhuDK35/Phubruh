#include<bits/stdc++.h>
using namespace std;
string a, b, t, k;
long long dem=0;

string nguyen(string a, long long b)
{
    long long e = 0, s = 0;
    string n;
    for (int i = 0; i < a.size(); ++i)
    {
        e = e * 10 + (a[i] - '0');
        s = e / b;
        e %= b;
        n = n + (char)(s + 48);
    }
    while (n.size() > 1 && n[0] == '0')
        n.erase(n.begin());
    return n;
}

long long du(string a, long long b)
{
    long long s = 0;
    for (int i = 0; i < a.size(); ++i)
        s = (s * 10 + (a[i] - '0')) % b;
    return s;
}

int main()
{
    freopen("SODEP.inp","r",stdin);
    freopen("SODEP.out","w",stdout);
    cin>>a>>b;
    for(int i=1;i<=100;i++)
    {
        t="";
        k="";
        for(int j=1;j<=i;j++)
        {
            t=t+'0';
        }
        t=a+t+b;
        if(du(t,89) == 0)
        {
            k = nguyen(t,89);
            if(k.size() == i)
            {
                cout<<k;
                dem=1;
                return 0;
            }
        }
    }
    if(dem!=1) cout<<0;
}

