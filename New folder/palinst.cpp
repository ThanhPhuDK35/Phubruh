#include<bits/stdc++.h>
using namespace std;
string y;
int s;

int main()
{
    cin>>y;
    s=0;

    int n = y.length();
    for(int i = n-1; i >=0; i--)
    {
       s=s*10+y[i];
    }
    cout<<s;

}
