#include<bits/stdc++.h>
using namespace std;
void leaders(vector<int> arr,int n)
{
   vector<int> ans;
   int maxi = arr[n-1];
   ans.push_back(arr[n-1]);

   for(int i=n-2;i>=0;i--)
   {
      if(arr[i]>maxi)
      {
        ans.push_back(arr[i]);
        maxi = arr[i];
      }
   }

   for(int i=0;i<ans.size();i++)
   {
      cout << ans[i];
   }
   

   
}
int main()
{
   int n;
   cin >> n;

   vector<int> arr(n);
   for(int i=0;i<n;i++)
   {
     cin >> arr[i]; 
   }

   leaders(arr,n);
 }