#include<bits/stdc++.h>
using namespace std;
long long a, b, s, x, v, e, u;
int main()
{
    //freopen("password2.Inp","r",stdin); // mo tep de doc
    //freopen("password2.Out","w",stdout); //mo tep de ghi
    cin>>a>>b;
    s=0;
    for(int i= 100; i<=999; i++)
    {
        if(a<=i && i<= b)
        {
            x=i;
            v=x%10;
            x=x/10;
            e=x%10;
            u=x/10;
        }
        if(u != e && u != v && e != v)
            s++;
    }
    cout<<s;


}

