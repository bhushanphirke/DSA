#include<bits/stdc++.h>
using namespace std;

void Prints_Divisors(int n)
{
  vector<int> v;
  for(int i=1;i*i<=n;i++)
  {
      if(n%i==0)
      {
         v.push_back(i);
           if((n/i)!=i)
          {
         v.push_back(n/i);
        } 
      }
     
  }
  sort(v.begin(),v.end());
  for(auto o : v)
  {
    cout << o << " ";
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
     Prints_Divisors(n);
   }
}