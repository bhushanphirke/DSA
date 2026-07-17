#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int> a,vector<int> b,int n1,int n2)
{
   int visited[n2]={};
   vector<int> intersect;

   for(int i=0;i<n1;i++)
   {
      for(int j=0;j<n2;j++)
      { 
        if(a[i] < b[j]) break;

        if(a[i] == b[j] && visited[j] == 0)
        {
            intersect.push_back(a[i]);
            visited[j]=1;
        }
      }
   }

   for(auto it : intersect)
   {
      cout << it << " ";
   }


}

int main()
{
   int n1,n2;
   cin  >> n1 >> n2 ;
   
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