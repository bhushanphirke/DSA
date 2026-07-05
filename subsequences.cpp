#include<bits/stdc++.h>
using namespace std;
void subsequence(int i,int arr[],vector<int> &ds,int n)
{
    if(i==n)
    {
      for(auto it : ds)
      {
    
        cout << it << " ";
        
      }
      if(ds.size()==0)
      {
        cout << "{}" ;
      }
      cout << endl;
      return;
    }
    
    ds.push_back(arr[i]);
    subsequence(i+1,arr,ds,n);
    ds.pop_back();
    subsequence(i+1,arr,ds,n);
    
}
int main()
{
    vector<int> ds;
    int i=0;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    subsequence(i,arr,ds,n);
}