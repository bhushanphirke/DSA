#include<bits/stdc++.h>
using namespace std;
pair<int,int> Two_Sum(vector<int> arr, int n, int sum)
{
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           if (i==j) j++;
           if(arr[i] + arr[j] == sum)
           {
              return {i,j};
           }
       }
        
    }

}
int main()
{
    int n, sum;
    cin >> n >> sum;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >>  arr[i];
    }

    pair<int,int> ans = Two_Sum(arr,n,sum);
     
    cout << ans.first << " " << ans.second;
}