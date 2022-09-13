#include<bits/stdc++.h>
using namespace std;
long long max1=0, max2=0, min1=0, min2=0, a, b, k, dem=0;

int main()
{
    freopen("NHAMSO.inp","r",stdin);
    freopen("NHAMSO.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>a>>b;
    long long i=1;
    while(a>0)
    {
        k=a%10;
        if(k==5 || k==6)
        {
            max1=6*i+max1;
            min1=5*i+min1;
        }
        else
        {
            max1=k*i+max1;
            min1=k*i+min1;
        }
        a=a/10;
        i=i*10;
    }
    i=1;
    while(b>0)
    {
        k=b%10;
        if(k==5 || k==6)
        {
            max2=6*i+max2;
            min2=5*i+min2;
        }
        else
        {
            max2=k*i+max2;
            min2=k*i+min2;
        }
        b=b/10;
        i=i*10;
    }
    cout<<min1+min2<<" "<<max1+max2;
}
