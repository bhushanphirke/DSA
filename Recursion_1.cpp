#include<bits/stdc++.h>
using namespace std;



void print_name(int count)
{
   if(count == 5) return;
   
   cout << " bhushan" << endl;
   count  ++ ;
   print_name(count);

}

int main()
{
   int count=0;
   print_name(count);
   return 0;
}