#include<bits/stdc++.h>
using namespace std;
long long n;

int main()
{
    freopen("BCC.inp","r",stdin);
    freopen("BCC.out","w",stdout);
    cin>>n;
    cout<<"Bang cuu chuong "<<n<<"\n";
    for(int i=1; i<=10; i++)
    {
        cout<<n<<" X "<<i<<" = "<< n*i<<"\n";
    }
}
