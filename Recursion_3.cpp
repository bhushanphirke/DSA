#include<bits/stdc++.h>
using namespace std;

void num_N_1(int i , int n)
{
   if(i<1) return;

   cout << i << endl;
   i--;
   num_N_1(i,n);

}

int main()
{
   int t;
   cin >> t;
   for(int i=0;i<t;i++)
   {
    int n;
    cin >> n;
    num_N_1(n ,n);
   }
}