#include<bits/stdc++.h>
using namespace std;
string s,chan="",le="";
int main()
{
    freopen("CHUSO.inp","r",stdin);
    freopen("CHUSO.out","w",stdout);
    cin>>s;
    for(int i=s.length()-1;i>=0;i--)
    {
        if((int(s[i])-30)%2==0) chan=chan+s[i];
        else le = le +s[i];
    }
    cout<<chan<<"\n"<<le;
}
