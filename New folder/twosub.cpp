#include<bits/stdc++.h>
using namespace std;
long long a, b, c;
int y[100];
int main()
{
        freopen("TwoSub.Inp","r",stdin); // mo tep de doc
        freopen("TwoSub.Out","w",stdout); //mo tep de ghi
        cin>>a>>b>>c;
        y[0]=a-b;
        y[1]=b-c;
        y[2]=c-a;
        y[3]=b-a;
        y[4]=c-b;
        y[5]=a-c;
        sort(y, y+6);
        cout<<y[0]<<endl;
       if(y[1]>y[0])
            cout<<y[1]<<endl;
        if(y[2]>y[1])
            cout<<y[2]<<endl;
            if(y[3]>y[2])
            cout<<y[3]<<endl;
        if(y[4]>y[3])
            cout<<y[4]<<endl;
            if(y[5]>y[4])
            cout<<y[5]<<endl;

}
