#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    for(int i=n-1;i>=1;i--)
    {
        int swaps=0;
        for(int j=0; j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swaps=1;
            }
        }
          if(swaps==0)
           {
           break;
           }

           for(int p=0;p<n;p++)
            {
            cout << arr[p]; 
            }
            cout << endl;
}
    
}