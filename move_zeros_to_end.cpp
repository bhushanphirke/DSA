#include<bits/stdc++.h>
using namespace std;
void optimal(vector<int> arr,int n)
{
  int j = -1;
  
  
  while(j<n)
  {
    if(arr[j]==0) break;
   j++;
  }

  
 
  int i=j+1;
  while(i<n)
  {

        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
        else{
          i++;
        }
        
    
  }

  for(int i=0;i<n;i++)
  {
    cout << arr[i];
  }


  
}
void Brute_force(vector<int> &arr,int n)
{
   vector<int> temp;
   for(int i=0;i<n;i++)
   { 
    if(arr[i]!=0)
    {
      temp.push_back(arr[i]); 
    }
     
   }
   
   for(int i=0;i<temp.size();i++)
   {
      arr[i] = temp[i];
   }

   for(int i=temp.size();i < n;i++)
   {
     arr[i]=0;
   }

   for(int i=0;i<n;i++)
   {
     cout << arr[i];
   }
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
    
    // Brute_force(arr,n);
    optimal(arr,n);
    
    
}