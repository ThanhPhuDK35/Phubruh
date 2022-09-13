#include<bits/stdc++.h>
using namespace std;
long long n, x;
string s, e;

int main()
{
    freopen("Bai2.inp","r",stdin);
    freopen("Bai2.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>s;
        e="";
        for(int i=s.size()-1; i>=0; i--)
        {
            e=e+s[i];
        }
        if(e == s)
            x++;
    }
    cout<<x;
}
