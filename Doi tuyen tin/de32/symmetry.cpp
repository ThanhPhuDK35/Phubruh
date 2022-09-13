#include <bits/stdc++.h>
using namespace std;
long long n, c, l, m=0;
string s, e;

int main()
{
    freopen("symmetry.inp","r", stdin);
    freopen("symmetry.out","w", stdout);
    cin>>s;
    l=s.size();
    for(long long i=0; i<l; i++)
    {
        e=s[i];
        for(long long j=i+1; j<l; j++)
        {
            e=e+s[j];
            string e1=e;
            reverse(e1.begin(),e1.end());
            if(e == e1)
            {
                m=max(m, j-i+1);
            }
        }
    }
    for(int i=0;i<s.size();i++)
    {
        string t="",h="";
        for(int j=i;j<s.size();j++)
        {
            t+=s[j];
            h=t;
            reverse(h.begin(),h.end());
            if(h==t)
            {
                if(t.size()==m)
                    cout<<i+1<<" "<<m<<'\n';
            }
        }
    }
}
