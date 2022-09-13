#include<bits/stdc++.h>
using namespace std;
long long n, a[100], x=0, y[100], e;

int main()
{
    freopen("SODEP.inp","r",stdin);
    freopen("SODEP.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int j=1; j<=n; j++)
    {
        x=0;
       for(long long i = 1; i <= sqrt(a[j]) ; i++)
       {
          if(a[j]%i==0)
          {
               x++;
                e = a[j]/i;
                if(e != i)
                {
                        x++;
                }
          }
        }
        if(a[j]%x==0)
            y[j]=0;
        else
            y[j]=1;
    }
    cout<<"\n";
    for(int i=1; i<=n; i++)
    {
        if(y[i]==0)
            cout<<"Co"<<"\n";
        else
            cout<<"Khong"<<"\n";
    }

}
