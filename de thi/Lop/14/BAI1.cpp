#include<bits/stdc++.h>
using namespace std;
long long n, s;

int main()
{
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        if(i<=5)
            s=s+6500;
        if(i>=6 && i<=15)
            s=s+7800;
        if(i>=16 && i<= 25)
            s=s+9200;
        if(i>=26)
            s=s+10300;
    }
    cout<<s<<"\n";
    cout<<s*12/100<<"\n";
    cout<<s+s*12/100<<"\n";
}
