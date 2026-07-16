#include<bits/stdc++.h>
using namespace std;

int linear_search(int n, vector<int> &arr,int num)
{
    for(int i=0;i<n;i++)
    {
       if(arr[i]==num)
       {
        return i;
       }
    }
    return -1;
}

int main()
{
   int n;
   cin  >> n;

   int num;
   cin >> num;

   vector<int> arr;
   for(int i=0;i<n;i++)
   {
     int x;
     cin >> x;
     arr.push_back(x);
   }

   cout << linear_search(n,arr,num);

}
    
