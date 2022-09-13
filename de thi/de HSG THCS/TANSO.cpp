#include<bits/stdc++.h>
using namespace std;
long long k, kq, a[10000001];
string s;

int main()
{
    freopen("TANSO.inp","r",stdin);
    freopen("TANSO.out","w",stdout);
    cin>>k>>s;
    for (int i=0; i<s.length(); i++)
    {
            if (s[i]>='A' && s[i]<='Z')
                a[s[i]]++;
            else
                a[s[i]-32]++;
    }
    for (int i=65; i<=95; i++)
    {
        if (a[i]>=k)
            kq++;
    }
     cout<<kq;

}
