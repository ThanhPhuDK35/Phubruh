#include<bits/stdc++.h>
using namespace std;
long long a[100005], n, s, m;

int main()
{
    cin>>n;
    s=0;
    m=0;
    for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
    for(int x = 0; x < n; x++)
        {
             ///-----
             s = 1;
             for(int i = x+1; i < n; i++)
             {
                if(a[x]==a[i])
                    s = s+1;
             }
            if(m < s)
               m = s;

        }
        cout<<m;
}
