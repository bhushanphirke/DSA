#include<bits/stdc++.h>
using namespace std;

void factorial(int i,int n,int fact)
{
   if(i>n) 
    {
      cout << fact ;
      return;
    }
    
    fact=fact*i;
    i=i+1;
    factorial(i,n,fact);
}

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
      int j =1;
      int n;
      cin >> n;
      int fact =1;
      factorial(j,n,fact);
    }
}