#include<bits/stdc++.h>
using namespace std;
int Find_Element_Appear_Once(vector<int> arr, int n)
{
    int xor1=0;
    for(int i=0;i<n;i++)
    {
        xor1=xor1^arr[i];
    }

    return xor1;

}

int better(vector<int> arr, int n)
{
     unordered_map<int,int> ans;

     for(int i=0;i<n;i++)
     {
       ans[arr[i]]++;

     }

     for(auto it : ans)
     {
        if(it.second==1)
        {
           return it.first;
        }
     }
     return 0;
}
int main()
{
    int n;
     cin >> n;
     
     vector<int> arr(n);
     for(int i=0;i<n;i++)
     {
        cin >>  arr[i];
     }

     cout << Find_Element_Appear_Once(arr,n) << endl ;
     cout << better(arr,n);

}