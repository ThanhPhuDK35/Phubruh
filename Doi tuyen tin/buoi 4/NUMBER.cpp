#include<bits/stdc++.h>
using namespace std;
long long n, i, a[100001], s;
bool d=false;

long long bp(long long x)
{
    long long c=0, b=0;
    while(x > 0)
    {
        b = x % 10;
        x = x / 10;
        c=c+(b*b);
    }
    return c;
}

int main()
{
    freopen("NUMBER.inp","r",stdin);
    freopen("NUMBER.out","w",stdout);
    while(cin>>n)
    {
        memset(a , 0 , sizeof(a));
        s=n+1;
        i=2;
        a[i-1]=s;
        d = false;
        while(d == false)
        {
           a[i]=bp(a[i-1]);
           if(a[i] == 1)
           {
               d == true;
               break;
           }
           for(int j=i-1; j>=1; j--)
           {
               if(a[i] == a[j])
               {
                   s++;
                   i=1;
                   memset(a , 0 , sizeof(a));
                   a[i]=s;
                   break;
               }
           }
           i++;

        }
        cout<<s<<"\n";
    }
}
