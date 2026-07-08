#include<bits/stdc++.h>
using namespace std;

int highest_ocurring(int n, int arr[])
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    
    int max=0;
    for(auto it : mp)
    {
        if(it.second>max)
        {
            max=it.second;
        }
    }
    
    for(auto it : mp)
    {
        if(max==it.second)
        {
            return it.first;
        }
    }
   return -1; 
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

    cout << highest_ocurring(n,arr); 

}