#include<bits/stdc++.h>
using namespace std;

void sum_of_N(int i,int n,int sum)
{
   
   if(i>n)
   {
      cout << sum;
      return;
   }
   
   sum_of_N(i+1,n,sum+i);
}

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int sum=0;
        int n;
        int j=1;
        cin >> n;
        sum_of_N(j,n,sum);
    }
}