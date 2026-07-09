#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int n, int arr[])
{
     for(int i=1;i<n;i++)
     {
        int swaps=0;
        for(int j=i;j>0;j--)
        {
            if(arr[j]< arr[j-1])
            {
              int temp=arr[j];
              arr[j]=arr[j-1];
              arr[j-1]=temp;
              swaps=1;
              
            }

          
         
        }
        
         for(int p=0;p<n;p++)
           {
           cout << arr[p] << " ";
           }
           cout << endl;
        if(swaps==0)
        {
          break;
        }

        
     }


     
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin >> arr[i];
    }

    insertion_sort(n,arr);
}