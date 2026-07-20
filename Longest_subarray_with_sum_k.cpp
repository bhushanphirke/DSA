#include<bits/stdc++.h>
using namespace std;
int Brute_Approach(vector<int> &arr,int n,int k)
{
   
   long long length =0;

   for(long long  i=0;i<n;i++)
   {
      long long sum =0;
      for(long long j=i ;j<n;j++)
      {
        sum = sum+arr[j];
        if(sum == k)
        {
            length = max(length , j-i+1);
        }
      }
   }
   return length;
}
int main()
{
    int n , k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
     cin >> arr[i];
    } 

    cout << Brute_Approach(arr,n,k);

}