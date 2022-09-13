#include<bits/stdc++.h>
using namespace std;
long long n, e, m=0;
string s;

int main()
{
    freopen("XanhDep.inp","r",stdin);
    freopen("XanhDep.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>s;
        e=1;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i] == s[i-1])
            {
                e++;
                m=max(m, e);
            }
            else
            {
                e=1;
            }
        }
    }
    cout<<m;
}