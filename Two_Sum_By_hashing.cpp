#include<bits/stdc++.h>
using namespace std;
pair<int ,int> Two_Sum(vector<int> &arr, int target ,int n)
{
    map<int,int> ans;
    for(int i=0;i<n;i++)
    {
       ans[arr[i]]=i;
    }

    for(int i=0;i<n;i++)
    {
       if(ans.find(target-arr[i])!=ans.end() && ans[target-arr[i]]!=i)
       {
         return {ans[target-arr[i]],i};
       }
    }
    return {-1,-1};

}
int main()
{
  int n,Target;
  cin >> n >> Target;

  vector<int> arr;

  for(int i=0;i<n;i++)
  {  
     int x;
     cin >> x;
     arr.push_back(x);

  }

  pair<int , int> ans = Two_Sum(arr,Target,n);
  cout << ans.first << " " << ans.second;
  
  

  
}