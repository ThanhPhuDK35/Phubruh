#include<bits/stdc++.h>
using namespace std;
string s;
long long so, chu;

int main()
{
    freopen("XAUKT.inp","r",stdin);
    freopen("XAUKT.out","w",stdout);
    cin>>s;
    so=0; chu=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
            chu++;
        else
            so++;
    }
    cout<<so<<" "<<chu;
}