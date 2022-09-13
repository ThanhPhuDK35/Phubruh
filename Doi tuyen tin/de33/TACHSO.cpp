#include <bits/stdc++.h>
using namespace std;
long long e;
string s;

int main()
{
    freopen("TACHSO.inp","r",stdin);
    freopen("TACHSO.out","w",stdout);
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] >= 48 && s[i] <=57)
        {
            cout<<s[i]-48;
            if(s[i+1] >= 58 || s[i+1] <=47)
                cout<<"\n";
        }
    }
}