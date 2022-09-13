#include<bits/stdc++.h>
using namespace std;
long long n, s;

int main()
{
    freopen("UOC.inp","r",stdin);
    freopen("UOC.out","w", stdout);
    cin>>n;
    s=0;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            s++;
            if(n/i != i)
            {
                s++;
            }
        }
    }
    cout<<s;
}