#include<bits/stdc++.h>
using namespace std;

void Union(vector<int> arr1 , vector<int> arr2,int n1, int n2)
{
   int i=0;
   int j=0;
   vector<int> unionarr;

   while(j<n2 && i<n1)
   {
      if(arr1[i]<=arr2[j])
      {
        if(unionarr.size() == 0 || unionarr.back() != arr1[i])
        {
         unionarr.push_back(arr1[i]);
        }
        i++;
      }
      else{
        if(unionarr.size() == 0 || unionarr.back() != arr2[j])
        {
         unionarr.push_back(arr2[j]);
        }
        j++;
      }

   }

   while(j<n2)
   {
      if(unionarr.size() == 0 || unionarr.back() != arr2[j])
        {
         unionarr.push_back(arr2[j]);
        }
        j++;
   }

   while(i<n1)
   {
     if(unionarr.size() == 0 || unionarr.back() != arr1[i])
        {
         unionarr.push_back(arr1[i]);
        }
        i++;
   }



   for(int i=0;i< unionarr.size();i++)
   {
     cout << unionarr[i] << " ";  
   }
}

int main()
{
   int n1,n2;
   cin >> n1 >> n2;

   vector<int> arr1(n1);
   vector<int> arr2(n2);

   for(int i=0;i<n1;i++)
   {
     cin >> arr1[i];
   }

   for(int i=0;i<n2;i++)
   {
     cin >> arr2[i];
   }

   Union(arr1,arr2,n1,n2);

}