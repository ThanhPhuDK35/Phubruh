#include<bits/stdc++.h>
using namespace std;
long long t, x, y;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if (x>3) cout<<"YES"<<'\n';
        if (x==1&&y==1)
            cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
         if (x==1&&y<=3)
            cout<<"YES";
        else cout<<"NO"<<'\n';
     
    }
}