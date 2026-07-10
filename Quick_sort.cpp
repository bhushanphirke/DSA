#include<bits/stdc++.h>
using namespace std;

void Quick_sort(int arr[], int low, int high)
{
    if(low >= high)
        return;

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j)
    {
        while(i <= high && arr[i] <= pivot)
            i++;

        while(j >= low && arr[j] > pivot)
            j--;

        if(i < j)
        {
           int temp=arr[i];
            arr[i]=arr[j];
            arr[j]= temp;
        }
            
            
    }

    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;

    Quick_sort(arr, low, j - 1);
    Quick_sort(arr, j + 1, high);
}
int main()
{
    int n;
    cin  >> n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >>  arr[i];
    }

    Quick_sort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
       cout << arr[i];
    }


}