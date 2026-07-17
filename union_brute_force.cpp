#include<bits/stdc++.h>
using namespace std;

void Union(vector<int> a,vector<int> b,int n1,int n2)
{
   set<int> temp;
   
   for(int i=0;i<n1;i++)
   {
     temp.insert(a[i]);
   }

   for(int i=0;i<n2;i++)
   {
     temp.insert(b[i]);
   }

   vector<int> Unionarr(temp.size());
   int i=0;
   for(auto it : temp)
   { 
    Unionarr[i]=it;
    i++;
   }

   for(int i=0;i < Unionarr.size();i++)
   {
       cout << Unionarr[i] << " ";
   }



}
int main()
{
    int n1;
    int n2;

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

    Union(a,b,n1,n2);
     
}
