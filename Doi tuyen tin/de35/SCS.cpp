#include<bits/stdc++.h>
using namespace std;
string s;
long long n;

int main()
{
    freopen("SCS.inp","r",stdin);
    freopen("SCS.out","w",stdout);
    cin>>s;
    n=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] >= 48 && s[i] <= 57)
            n++;
    }
    cout<<n;
}