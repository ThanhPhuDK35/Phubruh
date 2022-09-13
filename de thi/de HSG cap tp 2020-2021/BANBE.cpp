#include<bits/stdc++.h>
using namespace std;
long long l,r,s[1000001],d = 0;

int main()
{
    freopen("BANBE.inp","r",stdin);
    freopen("BANBE.out","w",stdout);
    memset(s,0,sizeof(s));
    cin>>l>>r;
    for(int i = 1;i <= 1000000;i++)
    {
        for(int j = i;j <= 1000000;j += i)
            s[j] += i;
    }
    for(int i = 1;i <= 1000000;i++)
    {
        s[i] -= i; 
    }
    for(int i = l;i <= r;i++)
    {
        if(i <= s[i] && s[i] <= r && s[s[i]] == i)
            d++;
    }
    cout << d;
}
