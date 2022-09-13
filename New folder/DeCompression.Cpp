#include <bits/stdc++.h>
using namespace std;
string s;
long long k=1,r=0;
int main()
{
    freopen("DeCompression.Inp","r",stdin);
    freopen("DeCompression.Out","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            r=r*10+s[i]-48;
        else
        {
            for(int j=0;j<r;j++)
                cout<<s[i];
            r=0;
        }

    }

}
