#include<bits/stdc++.h>
using namespace std;
long long n, s=0;

int main()
{
    //freopen("ABC.inp","r",stdin);
    //freopen("ABC.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i*j >= n) break;
            s++;

        }

    }
cout<<s;
}
