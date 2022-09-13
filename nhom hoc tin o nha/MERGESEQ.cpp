#include <bits/stdc++.h>
using namespace std;
int n, a[15000000], b[15000000], s, d, x, y;

void read(int &a)
{
    char c;
    a = 0;
    do 
    {
        c = getchar();
    }
    while(!isdigit(c));
    while(isdigit(c))
    {
        a = a * 10 + c - '0';
        c = getchar();
    }
}

int main()
{
    read(n);
    for(int i=1; i<=n; i++)
    {
        read(a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        read(b[i]);
    }
    sort(a+1, a+1+n);
    sort(b+1, b+1+n);
    x=1; y=1;
    a[n+1]=1e18; b[n+1]=1e18;
    for(int i=1; i<=n*2; i++)
    {
        if(a[x] > b[y])
        {
            cout<<b[y]<<" ";
            y++;
        }
        else
        {
            cout<<a[x]<<" ";
            x++;
        }
    }
}