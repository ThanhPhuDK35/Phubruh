#include<bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    freopen("ReFormN.INP","r",stdin);
    freopen("ReFormN.OUT","w",stdout);
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    cin>>n;
    cout<<n<<" ";
    while(n > 1)
    {
        if(n % 2 == 1)
        {
            n = n * 3 + 1;
            cout<<n<<" ";
        }
        if(n % 2 == 0)
        {
            n = n / 2;
            cout<<n<<" ";
        }
    }
}
