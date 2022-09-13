#include<bits/stdc++.h>
using namespace std;
string y;
long long a, b;
int main()
{
      freopen("PerformString.Inp","r",stdin); // mo tep de doc
      freopen("PerformString.Out","w",stdout); //mo tep de ghi
    cin>>y;
    a=0;
    b=0;
    for(int i = 0; i < y.length(); i++)
    {
        if(y[i] == 'a'|| y[i]=='A')
            a=a+1;
        if(y[i] == 'b'|| y[i]=='B')
            b=b+2;
    }
    if(a>b)
        cout<<b;
    else
        cout<<a;
}
