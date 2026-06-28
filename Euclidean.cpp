#include<bits/stdc++.h>
using namespace std;

void euclidean(int n,int m)
{
   int gcd=1;
   while(n>0 && m>0)
   {
      if(n>m)
      {
        n=n%m;
      }
      else
      {
        m=m%n;
      }
   }
   if(m==0)
   {
    gcd=n;
   }
   else
   {
    gcd =m;
   }

   cout << gcd;

}

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin >> n >> m;
        euclidean(n,m);
    }
}