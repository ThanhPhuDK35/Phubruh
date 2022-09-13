#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
 char s[256];
 char t;
 gets(s);
 scanf("%c",&t);
 int dem=0;
 for(int i=0;i<=strlen(s);i++)

 {
 if(s[i]==t) dem=dem+1;
 }
 printf("%d",dem);
    return 0;
}
