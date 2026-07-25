#include<bits/stdc++.h>
using namespace std;

void Sort_Optimal(vector<int> &arr, int n)
{
    int low=0;
    int mid=0;
    int High=n-1;

    while(mid<High)
    {
        if(arr[mid]==0)
        {
           int temp=arr[mid];
           arr[mid]=arr[low];
           arr[low]=temp;
           mid++;
           low++;
        }

        if(arr[mid]==1)
        {
            mid++;
        }
        if(arr[mid]==2)
        {
            int temp= arr[High];
            arr[High]=arr[mid];
            arr[mid]=temp;
            High--;
        }

    }

    for(auto it : arr)
    {
        cout << it << " ";
    }

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
   
   Sort_Optimal(arr,n);

}