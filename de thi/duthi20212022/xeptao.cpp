#include<bits/stdc++.h>
using namespace std;
long long a[100000001], n, i, d0, d1;
string s;

int main()
{
    freopen("xeptao.inp","r",stdin);
    freopen("xeptao.out","w",stdout);
    cin>>n>>s;
    d1=0;
    d0=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='0' && s[i+1]=='0') 
            d0++;
        else if(s[i]=='1' && s[i+1]=='1') 
            d1++;
    }
    cout<<max(d1,d0);
}