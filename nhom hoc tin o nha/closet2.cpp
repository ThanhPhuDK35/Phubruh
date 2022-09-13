#include <bits/stdc++.h>
using namespace std;
long long n, q, a[100001], x;

long long tk( long long k ) 
{
    long long t ,f ,d ,kq = 0 ;
    t = 1 ;
    f = n ;
    while ( t <= f ) 
    {
        d = ( t + f ) / 2 ;
        if(a [ d ] > k) 
            {
                f = d - 1 ;
            }
        else
            {
                kq = d;
                t = d + 1 ;
            } 
    }
    return kq ;
}
long long tk1 ( long long k ) 
{
    long long t , f , d , kq = 0 ;
    t = 1 ;
    f = n ;
    while ( t <= f ) 
    {
        d = ( t + f ) / 2 ;
        if(a [ d ] < k) 
            {
                t = d + 1 ;
            }
        else
            {
                kq = d;
                f = d - 1 ;
            } 
    }
    return kq ;
}
int main()
{
    cin>>n>>q;
    for(long long i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    while(q--)
    {
        cin>>x;
        if(abs(x-a[tk(x)]) >= abs(x-a[tk1(x)]))
        {
            cout<<a[tk1(x)]<<"\n";
        }
        else cout<<a[tk(x)]<<"\n";
    }
}