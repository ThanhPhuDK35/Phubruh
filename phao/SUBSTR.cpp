#include<bits/stdc++.h>
using namespace std;
long long m1, m2, f[10001][10001];
string s;

void sub()
{
    string e, e1, e2;
    for(long long i=0; i< s.size(); i++)
    {
        e="";
        for(long long j=i; j <s.size(); j++)
        {
            e=e+s[j];
            e1=e, e2=e;
            reverse(e2.begin(), e2.end());
            if(e1 == e2)
            {
                m1=max(m1, j-i+1);
            }
        }
    }
}

void qhd()
{
    string a="", b=s, c=s;
    reverse(c.begin(), c.end());
    a=c;
    a=' '+a;
    b=' '+b;
    long long l1=a.size()-1, l2=b.size()-1;
    for(int i=0; i<=l1; i++) f[0][i]=0;
    for(int i=0; i<=l2; i++) f[i][0]=0;
    for(int i=1; i<=l1; i++)
    {
        for(int  j=1; j<=l2; j++)
        {
            if(a[i] == b[j])
            {
                f[i][j]=1+f[i-1][j-1];
            }
            else
            {
                f[i][j]=max(f[i-1][j], f[i][j-1]);
            }
        }
    }
    m2=f[l1][l2];
}

int main()
{
    freopen("SUBSTR.inp","r",stdin);
    freopen("SUBSTR.out","w",stdout);
    getline(cin, s);
    sub();
    qhd();
    cout<<m1<<"\n"<<m2;
}