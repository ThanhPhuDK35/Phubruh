#include<bits/stdc++.h>
using namespace std;
long long a[100005], n, k, s;

int main()
{
    cin>>n>>k;
         for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] % 10 == k)
            {
                s=s+a[i];
            }

        }
        cout<<s;

}
