#include <bits/stdc++.h>
using namespace std;

long long a,b,d = 0,f[10000000];

int main()
{
    //freopen("NumFriend.inp","r",stdin);
    //freopen("NumFriend.out","w",stdout);
    cin >> a >> b;
    size(b);
    for(int i = 1;i <= b;i++)
        f[i]+=1;
    for(int i = a;i <= b;i++)
    if(f[i] < b)
    {
        if(i == f[f[i]])
            d++;
        if(i == f[i])
            d++;
    }
    cout << d / 2;
}
