#include<bits/stdc++.h>
using namespace std;
long long x, y, s, a[100001], n, d;

int main()
{
    freopen("Jumpow2.inp","r",stdin);   
    freopen("Jumpow2.out","w",stdout);
    cin>>x;
    a[0]=1;
    for(int i=1; i<=100; i++)
    {
        a[i]=a[i-1]*2;
    }
    while(x != 0)
    {
        for(int i=1; i<= 100; i++)
        {
            if(a[i] > x)
            {
                n=a[i-1];
                d++;
                break;
            }
        }
        x=x-n;
    }
    cout<<d;
}