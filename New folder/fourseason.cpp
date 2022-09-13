#include<bits/stdc++.h>
using namespace std;
string y;

int main()
{
      freopen("fourseason.Inp","r",stdin); // mo tep de doc
      freopen("fourseason.Out","w",stdout); //mo tep de ghi
      cin>>y;
      if(y=="Spring")
        cout<<"Summer";
      if(y=="Summer")
        cout<<"Autumn";
      if(y=="Autumn")
        cout<<"Ainter";
      if(y=="Winter")
        cout<<"Spring";
}
