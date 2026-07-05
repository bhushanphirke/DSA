#include<bits/stdc++.h>
using namespace std;
int subsequence(int i,int arr[],int n,int sum)
{
    if(i==n)
    {
      if(sum==2){
       return 1;
      }
    
      return 0;
    }
    
    
    sum = sum + arr[i];
    int l=subsequence(i+1,arr,n,sum);
    
    sum = sum - arr[i];
    int r =subsequence(i+1,arr,n, sum);
    return l+r;
}
int main()
{
   
    int i=0,sum=0;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << subsequence(i,arr,n,sum);
}