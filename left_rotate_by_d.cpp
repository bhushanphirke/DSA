#include<bits/stdc++.h>
using namespace std;

void left_rotate(vector<int> &arr,int n,int d)
{

   d=d%n;
   reverse(arr.begin(),arr.begin()+d);
   reverse(arr.begin()+d,arr.end());
   reverse(arr.begin(),arr.end());

   for(int i=0;i<n;i++)
   {
      cout << arr[i] << " ";
   }
}
int main()
{
    int n;
    cin >> n;

    int d;
    cin >> d;

    vector<int> arr;
    for(int i=0;i<n;i++)
    {
       int x;
       cin >> x;
       arr.push_back(x);
    }
     
    left_rotate(arr,n,d);
    
    return 0;
}