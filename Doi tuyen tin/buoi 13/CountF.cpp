#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("CountF.inp","r",stdin);
    freopen("CountF.out","w",stdout);
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    long long n;
    cin >> n;
    if(n<0)
    {
        cout <<"1";
        return 0;
    }
    long long s=0;
    for(int i = 2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            s++;
        while(n%i==0)
        {
        n/=i;
        }
        }
    }
    if (n>1)
    {
        s++;
    }
    cout<<s;

}
