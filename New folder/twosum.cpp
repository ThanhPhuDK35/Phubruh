#include<bits/stdc++.h>
using namespace std;
long long a, b, c;
int y[100];
int main()
{
        freopen("TwoSum.Inp","r",stdin); // mo tep de doc
        freopen("TwoSum.Out","w",stdout); //mo tep de ghi
        cin>>a>>b>>c;
        y[0]=a+b;
        y[1]=b+c;
        y[2]=c+a;
        sort(y, y+3);
        cout<<y[0]<<endl;
        if(y[1]>y[0])
            cout<<y[1]<<endl;
        if(y[2]>y[1])
            cout<<y[2]<<endl;
}
