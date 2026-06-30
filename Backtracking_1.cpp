#include<bits/stdc++.h>
using namespace std;

void backtracking(int i,int n)
{
    if(i>n) return;

    backtracking(i+1,n);
    cout << i << endl;
}

int main()
{  
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
      int j=1;
      int n;
      cin >> n;
      backtracking(j,n);
    }
}