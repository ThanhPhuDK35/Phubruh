    #include<bits/stdc++.h>
    using namespace std;
    long long n, m, s;
    string a[100001], ma;

    int main()
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
         s=1;
         for(int j=i+1; j<=n; j++)
         {
             if(a[i]==a[j])
                s++;
         }
         if(s>=m)
         {
                     m=s;
            ma=a[i];

         }
         if(s==m)
         {
             if(ma<a[i-1])
                ma=a[i-1];
         }
        }
        cout<<ma;
    }




