#include<bits/stdc++.h>
using namespace std;

void count_digit(int n)
{
   int count=0;
   while(n>0)
   {
     n=n/10;
     count++ ;
   }
  cout << count;
}

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t;i++)
    {
        int n;
        cin >> n;
        count_digit(n);
    }

}