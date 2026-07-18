#include<bits/stdc++.h>
using namespace std;
int Max_consecutive_one(vector<int> &arr,int n)
{
     int max =0;
     int count =0;
     for(int i=0;i<n;i++)
     {
       if(arr[i]==1)
       {
        count ++;
        if (count > max)
        {
          max = count;
        } 
       }
       else{
        count =0;
       }
     }
     return max;
}
int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout <<  Max_consecutive_one(arr,n);
}