#include<bits/stdc++.h>
using namespace std;
int optimal(vector<int> &arr, int n, int k)
{
   int sum=arr[0];
   int len =0;
   int i=0;
   int j=0;

   while(j<n)
   {
      j++;
      sum = sum + arr[j];

      if(sum==k)
      {
        len= max(len,j-i+1);
      }
      
      if(sum > k)
      {
        sum=sum-arr[i];
        i++;
      }

   }
   
   return len;
}
int main()
{
    int n,k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
      cin >>  arr[i];
    }

    cout << optimal(arr,k,n);

}