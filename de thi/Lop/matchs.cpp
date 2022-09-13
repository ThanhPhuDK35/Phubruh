#include<bits/stdc++.h>
using namespace std;
long long n, a[1001];

int main()
{
    freopen("matchs.inp","r",stdin);
    freopen("matchs.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++) 
    {
        cin>>a[i];
        if(a[i] <= 3) 
            cout<<4-a[i]<<"\n";
        else
        {
            if((a[i] - 2) % 2 == 0)
            {
                cout<<"0"<<"\n";
            }
            else
            {
                cout<<"1"<<"\n";
            }
        }
    }

}