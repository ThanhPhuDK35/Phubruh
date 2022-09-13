    #include<bits/stdc++.h>
using namespace std;

long long n, s;
int a[1000];
bool haha(long long x)
{
    if(x<=1) return false;
    else
    {
        for(long long i=2; i<= sqrt(x); i++)
        {
            if(x%i==0)
            {
              return false;
            }

        }
        return true;
    }
}
int main()
{
    cin>>n;
    s=0;
    for(int i = 0; i<n ; i++)
    {
        cin>>a[i];
        if(haha(a[i])==true)
            s++;
    }
    cout<<s;
}
