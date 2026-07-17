#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int> a , vector<int> b, int n1 , int n2)
{
    int i=0;
    int j=0;

    vector<int> intersect;

    while(i<n1)
    { 
        
         if(a[i]==b[j])
         {
            intersect.push_back(a[i]);
            i++;
            j++;
         }
         else{
            i++;
         }
         

    }

    for(auto it: intersect)
    {
        cout << it  <<  " ";
    }
}
int main()
{
    int n1,n2;
    cin  >> n1 >> n2;

    vector<int> a;
    vector<int> b;

    for(int i=0;i<n1;i++)
    {
       int x;
       cin >> x;
       a.push_back(x);
    }

    for(int i=0;i<n2;i++)
    {
       int x;
       cin >> x;
       b.push_back(x);
    }
    
    intersection(a,b,n1,n2);
}