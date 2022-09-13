#include<bits/stdc++.h>
using namespace std;
string s, s1, s2;

int main()
{
    freopen("XAU.inp","r",stdin);
    freopen("XAU.out","w",stdout);
    s1=" "; s2=" ";
    while(getline(cin,s))
    {
        s=s+' ';
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != ' ') s1=s1+s[i];
            else
            {
                if(s1.size() > s2.size())
                    s2= s1;
                    s1="";

            }

        }
        cout<<s2<<"\n";
        s=""; s1=""; s="";
    }
}
