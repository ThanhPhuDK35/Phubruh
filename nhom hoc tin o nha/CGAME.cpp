#include <bits/stdc++.h>
using namespace std;
long long n, a[1000001], d, c, s, th1, th2, i;

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    d=1; c=n; i=0; s=0;
    while(d <= c)
    {
        if(a[d] > a[c])
            {s=a[d]; d++;}
        else
            {s=a[c]; c--;}

        if(i%2 == 0) th1+=s;
        else th2+=s;
        i++;
    }
    cout<<th1<<" "<<th2;
}