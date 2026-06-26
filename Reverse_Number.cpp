#include<bits/stdc++.h>
using namespace std;

void Reverse(int n)
{
      int reverse=0;
      while(n>0)
      {
        int remainder = n%10;
        n=n/10;
        reverse = reverse * 10 + remainder;
      }
      cout << reverse;
}

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
      int n;
      cin >> n;
      Reverse(n);
    }  
}