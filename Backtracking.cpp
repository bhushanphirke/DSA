#include<bits/stdc++.h>
using namespace std;

void backtracking(int i,int n)
{
    if(i<1) return;

    backtracking(i-1,n);
    cout << i << endl;
}

int main()
{  
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
      int n;
      cin >> n;
      backtracking(n,n);
    }
}