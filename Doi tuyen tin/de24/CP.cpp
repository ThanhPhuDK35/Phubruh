#include<bits/stdc++.h>
using namespace std ;
long long x ;

long long phantich(long long k)
{
    long long h = 1 , i = 2 , thu ;
    while(i*i <= k)
    {
        thu = 0 ;
        while(k%i == 0)
        {
            k = k/i ;
            thu++ ;
        }
        if(thu%2 != 0)
        {
            h *= i ;
        }
        i++ ;
    }
    if(k > 1) h *= k ;
    return h ;
}

int main ()
{
    freopen("cp.inp" , "r" , stdin) ;
    freopen("cp.out" , "w" , stdout) ;
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) , cout.tie(0) ;
    while(cin >> x)
    {
        cout << phantich(x) << '\n' ;
    }
}

