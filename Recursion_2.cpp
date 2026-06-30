#include<bits/stdc++.h>
using namespace std;


void print_numbers(int count , int n)
{
   if(count > n) return;

   cout << count << endl;
   count ++;
   print_numbers(count ,n);
}


int main()
{
    int count =1;
    int n;
    cin >> n;
    print_numbers(count , n);
    return 0;
}