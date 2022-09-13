#include<bits/stdc++.h>
using namespace std;
long long n, x;
string s[10000001];

int main()
{
    freopen("MARK.inp","r",stdin);
    freopen("MARK.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n*2-1; i++)
    {
        cin>>s[i];
    }
    sort(s+1, s+n*2);
    for(int i=1; i<=n*2-1; i+=2)
    {

        if(s[i] != s[i+1])
        {

            cout<<s[i];
            break;
        }
    }
}
