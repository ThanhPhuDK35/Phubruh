#include<bits/stdc++.h>
using namespace std;
long long n, y, s;

bool nto(long long x)
{
    if(x<2) return false;
    if(x<=3) return true;
    if(x%2 == 0) return false;
    for(int i=3; i<= sqrt(x); i+=2)
        if(x%i == 0)
        return false;
    return true;
}

long long sumdigit(long long a)
{
    long long b, c=0;
    while(a > 0)
    {
        b = a % 10;
        a = a / 10;
        c=c+b*b;
    }
    return c;
}

int main()
{
    freopen("BAI1.inp","r",stdin);
    freopen("BAI1.out","w",stdout);
    while(cin>>n)
    {
        if(n==1)
        {
            cout<<"11"<<"\n";
        }
        else
        {
            y=11;
            s=1;
            while(s != n)

            {
                y++;
                if(nto(sumdigit(y)) == true)
                    s++;

            }
            cout<<y<<"\n";
        }
    }
}
