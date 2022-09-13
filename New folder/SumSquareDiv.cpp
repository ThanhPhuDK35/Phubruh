#include<bits/stdc++.h>
using namespace std;
const  int base = 123456789;
long long n, x, y, j;

int main()
{
    freopen("SumSquareDiv.inp","r",stdin);
    freopen("SumSquareDiv.out","w",stdout);
    cin>>n;
    x=0;
    y=0;
    for(long long i = 1; i <= sqrt(n) ; i++)
    {
        if(n%i==0)
        {
             if(i%2==0)
               x=x+i;
            else
                y=y+i;
            j = n/i;
                if(j != i)
                {
                    if( j%2==0)
                        x = x+j;
                    else
                        y = y+j;
                }
        }
    }
            cout<<((x*x)%base +(y*y)%base)%base;
}


