#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(int(s[i]) < 77)
          cout<<char(s[i]+25);
        if(int (s[i]) > 77)
          cout<<char(s[i] - 25);
    }
}

