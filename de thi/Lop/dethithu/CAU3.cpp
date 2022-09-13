#include<bits/stdc++.h>
using namespace std;
long long a[10000001], dem, c, kq;
bitset<20> b;
string n;

void inra()
{
    long long e=0;
    for(int i=0; i<dem; i++)
    {
        if(b[i] == 1)
            e=e*10+a[i];
    }
    if(e % 3 == 0 && e != 0) 
    {
        kq++;
    }
}

int main()
{
    cin>>n;
    dem=0; kq=0;
    for(int i=0; i < n.size(); i++)
    {
        a[i]=n[i]-48;
    }
    if(n.size() == )
    for(int i=0; i<pow(2, dem-1); i++)
    {
        b = bitset<20>(i);  
        inra();
    }
    cout<<kq;
}