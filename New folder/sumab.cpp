#include<bits/stdc++.h>
using namespace std;
string y;
int s;

int main()
{
    cin>>y;
    s=0;
    int n = y.length();
    for(int i = 0; i < n; i++)
    {
          if(y[i] == 'a'|| y[i]=='A' || y[i] == 'b'|| y[i]=='B')
          s=s+i;
    }
    cout<<s<<endl;
}
