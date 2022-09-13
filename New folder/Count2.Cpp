#include<bits/stdc++.h>
using namespace std;
long long n, a=1, b=9, s;

bool gd(long long x)
{
    while(x>0)
    {
        a=x%10;
        x=x/10;
        if(a == x%10)
           return false;
    }
    return true;
}

int main()
{
    freopen("Count2.inp","r",stdin);
    freopen("Count2.out","w",stdout);
    cin>>n;
    if(n==1)
      {cout<<"10"; return 0;}    
    n--;
    while(n>0)
    {
        n=n-1;
        a=a*10;
        b=b*10+9;
    }
    for(int i=a; i<=b; i++)
    {
        if(gd(i) == true)
            s++;
    }
      cout<<s;
}