#include<bits/stdc++.h>
using namespace std;
long long dem, kt;
string n;

int main()
{
    cin>>n;
    dem=0;
    for(int i=0; i<=n.size(); i++)
    {
        kt=0;
        for(int j=0; j<=i; j++)
        {
            if(n[i] == n[j])
                kt++;
        }
        if(kt==0)
            dem++;
    }
    cout<<dem;
}




