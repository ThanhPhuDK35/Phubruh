#include<bits/stdc++.h>
using namespace std;
string y;

int main()
{
    cin>>y;
    int n = y.length();
    for(int i = 0; i < n; i++)
        if(i%2 == 1)
          cout<<y[i]<<endl;
}
