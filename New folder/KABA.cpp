#include<bits/stdc++.h>
using namespace std;
string s, y;
long long l, kq, dem, q, e, a[1000001];

int main()
{
    freopen("KABA.inp","r",stdin);
    freopen("KABA.out","w",stdout);
    cin>>s;
    l=s.size()-1;
    e=0;
    for(int i=0; i<=l; i++)
    {
        if(s[i] == 'A') e++;
        if(s[i] == 'B') q++;
        if(e == 2)
        {
            dem+=q;
            e=0;
            q=0;
        } 
    }
    cout<<dem;
}