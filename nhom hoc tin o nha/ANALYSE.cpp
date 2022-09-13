#include <bits/stdc++.h>
using namespace std;
long long t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n<=1)
        {
            cout << " " <<"\n";
            //continue;
        }
        long long dem=0;
        for(int i = 2;i<=sqrt(n);i++)
        {
            if(n%i == 0)
            {
                long long s=0;
                if(dem == 0)
                    cout<<"("<<i<<"^";
                else 
                    cout<<"*("<<i<<"^";
                while(n%i==0)
                {
                    n/=i;
                    s++;
                }
                cout<<s<<")";
                dem++;
            }
        }
        if (n>1 && dem > 0)
            cout <<"*("<<n<<"^1)";
        if (n>1 && dem == 0)
            cout <<"("<<n<<"^1)";
        cout<<"\n";
    }
    return 0;
}
