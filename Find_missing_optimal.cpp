#include<bits/stdc++.h>
using namespace std;
int optimal_sum(vector<int> arr, int n)
{
  int sum = n*(n+1)/2;

  for(int i =0 ; i<n-1;i++)
  {
    sum=sum-arr[i];
  }
  return sum;
}
int optimal_xor(vector<int> arr , int n)
{
   int xor1=0;
   int xor2=0;
   for(int i=0;i<n-1;i++)
   {
      xor2= xor2 ^ arr[i];
      xor1= xor1 ^ (i+1);
   }
   xor1=xor1^n;
   return xor1^xor2;
}
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++)
    {
      cin >> arr[i];
    }

    cout << optimal_sum(arr,n) << endl;
    cout << optimal_xor(arr,n);
} 