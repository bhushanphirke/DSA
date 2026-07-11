#include<bits/stdc++.h>
using namespace std;


int second_largest(vector<int> &arr,int n)
{
  int largest=arr[0];
  int  second = -1;
  for(int i=0;i<n;i++)
  {
    if(arr[i] >  largest)
    {
       largest=arr[i];
    }
    if(arr[i]>second && arr[i]<largest)
    {
        second=arr[i];
    }
  }
  return second;

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
  
  cout << second_largest(arr,n);
}