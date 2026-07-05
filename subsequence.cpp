#include<bits/stdc++.h>
using namespace std;
void subsequence(int i,int arr[],vector<int> &ds,int n,int sum)
{
    if(i==n)
    {
      if(sum==2)
      {
     for(auto it : ds)
      {
    
        cout << it << " ";
        
      }
      cout << endl;
      }
    
      return;
    }
    
    ds.push_back(arr[i]);
    sum = sum + arr[i];
    subsequence(i+1,arr,ds,n,sum);
    ds.pop_back();
    sum = sum - arr[i];
    subsequence(i+1,arr,ds,n, sum);
    
}
int main()
{
    vector<int> ds;
    int i=0,sum=0;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    subsequence(i,arr,ds,n,sum);
}