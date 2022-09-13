#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], m=1e18, s;

int main()
{
    //freopen("NghichThe.inp","r",stdin);
    //freopen("NghichThe.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {

            if(a[i]>a[j])
            {
                s++;
            }

        }
    }
    cout<<s;
}
