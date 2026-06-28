#include<bits/stdc++.h>
using namespace std;

void armstrong(int n)
{
   int num = n;
   int cube_sum=0;
   while(n>0)
   { 
    int remainder = n%10;
    cube_sum=cube_sum+(remainder*remainder*remainder);
    n=n/10;
   }
   if(num==cube_sum)
   {
    cout << "Numbers are Armstrong";
   }
   else
   {
     cout << "Numbers are not Armstrong";
   }

}

int main()
{
   int t;
   cin >> t;
   for(int i=0;i<t;i++)
   {
     int n;
     cin >> n;
     armstrong(n);
   }
}