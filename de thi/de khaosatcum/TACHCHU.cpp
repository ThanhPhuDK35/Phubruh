#include<bits/stdc++.h>
using namespace std;
long long k, kq, a[10000001], b[100001], b1, c;
string s, b2;

int main()
{
    freopen("TACHCHU.inp","r",stdin);
    freopen("TACHCHU.out","w",stdout);
    while(cin>>s)
    {
        for (int i=0; i<s.length(); i++)
        {
                if (s[i]>='A' && s[i]<='Z')
                    a[s[i]]++;
                else
                    a[s[i]-32]++;
        }
    }
    c=0;
    for(int i=65; i<=95; i++)
    {
        if (a[i] == 1)
        {
            cout<<char(i)<<"\n";
            c++;
        }
    }
    if(c==0)
    {
        cout<<"-1";
    }
}
