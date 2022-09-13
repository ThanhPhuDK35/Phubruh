#include<bits/stdc++.h>
using namespace std;
long long n;
string st;

int main()
{
    cin>>n;
    for(int i=1; i <= n; i++)
    {
       st=st+'x';
    cout<<st<<endl;
    }
        for(int i= 0 ; i <= n; i++)
       {
             st.erase(i);
             cout<<st<<endl;
       }
}
