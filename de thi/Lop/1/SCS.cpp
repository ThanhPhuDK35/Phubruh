#include<bits/stdc++.h>
using namespace std;
string y;
int s;

int main()
{
    freopen("SCS.Inp","r",stdin);
    freopen("SCS.Out","w",stdout);
    cin>>y;
    s=0;
    int n = y.length();
    for(int i = 0; i < n; i++)
    {
          if(y[i] == '1' || y[i] == '2' || y[i] == '3' || y[i] == '4' || y[i] == '5' || y[i] == '6' || y[i] == '7' || y[i] == '8' || y[i] == '9' || y[i] == '0')
          s=s+1;
    }
    cout<<s<<endl;
}
