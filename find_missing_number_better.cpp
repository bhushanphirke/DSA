#include<bits/stdc++.h>
using namespace std;
int better_approach(vector<int> arr, int n)
{
    int hasharr[n+1]={};
    for(int i=0;i<n-1;i++)
    {
        hasharr[arr[i]] = 1;
    }

    for(int i=1;i<n+1;i++)
    {
       if(hasharr[i]==0)
       {
          return i;
       }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++)
    {
      cin >> arr[i] ;
    }

    cout << better_approach(arr,n);
}