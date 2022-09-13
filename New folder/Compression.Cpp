#include<bits/stdc++.h>
using namespace std;
string s;
long long e;
int main()
{
    freopen("Compression.inp","r",stdin);
    freopen("Compression.out","w",stdout);
    cin>>s;
    for(int i=0; i< s.size(); i++)
    {
        e++;
        if(s[i+1] != s[i])
        {
            cout<<e<<s[i];
            e=0;
        }
    }
}
