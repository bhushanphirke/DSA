#include<bits/stdc++.h>
using namespace std;

int reverse(int i,int arr[],int n)
{
    if(i>=n-i-1)
    {
        return 0;
    }
    swap(arr[i],arr[n-i-1]);
    return  reverse(i+1,arr,n);
}

int main()
{
    int n;
    int i=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    reverse(i,arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}