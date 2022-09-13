#include<bits/stdc++.h>
using namespace std;
long long n, s;

int main()
{
    //freopen("Bai1.inp","r",stdin);
    //freopen("Bai1.out","w",stdout);
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        while(n%i==0)
        {
            if(i==5)
                s++;
            n=n/i;
        }
    }
    cout<<s;

}
