#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
   if(n<=1) return n;

   cout << fibonacci(n-2)+fibonacci(n-1);
   
}

int main()
{
    int n; 
    cin >> n;
    fibonacci(n);
}