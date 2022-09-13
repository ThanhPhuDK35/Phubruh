#include<bits/stdc++.h>
using namespace std;
long long t, x, b;
pair<long long , long long> a[1000001];

int main()
{
    freopen("DigitInNum.inp","r",stdin);
    freopen("DigitInNum.out","w",stdout);
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    for(int i=0; i<t; i++)
    {
        x=0;
        while(a[i].first>0)
        {
            b=a[i].first%10;
            a[i].first=a[i].first/10;
            if(b==a[i].second)
                x=1;
        }
        if(x==1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}

