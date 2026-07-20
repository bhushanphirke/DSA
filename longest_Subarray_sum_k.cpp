#include<bits/stdc++.h>
using namespace std;
int better(vector<int> &arr,int n,int k )
{
    int sum=0;
    int length =0;
    map<int,int> prefixsum;
   for(int i=0;i<n;i++)
   {
      sum += arr[i];
      
      if(sum==k)
      {
        length = max(length,i+1);
      }

      if(prefixsum.find(sum-k) != prefixsum.end())
      {
          int len = i - prefixsum[sum-k];
          length = max(length , len);
      }
      
      if(prefixsum.find(sum) == prefixsum.end())
      {
        prefixsum[sum]=i;
      }
      
   }
   return length;
}
int main()
{ 
    int n ,k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
       cin >> arr[i];
    }

    cout << better(arr,n,k);
}


