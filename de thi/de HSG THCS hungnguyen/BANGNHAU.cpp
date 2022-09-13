#include<bits/stdc++.h>
using namespace std;
long long a[10];
map<long long, long long> s;

int main()
{
    freopen("BANGNHAU.inp","r",stdin);
    freopen("BANGNHAU.out","w",stdout);
    for(int i=1; i<=5; i++)
    {
        cin>>a[i];
        s[a[i]]++;
        if(s[a[i]] == 4)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
