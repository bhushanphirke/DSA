#include<iostream>
using namespace std;

void pattern19(int n)
{ 
  int initial=0;
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<=n-i;j++)
    {
        cout << "*";
    }
    for(int j=0;j<initial;j++)
    {
        cout << " ";
        
    }
      for(int j=0;j<=n-i;j++)
    {
        cout << "*";
    }
    cout << endl;
    initial = initial+2;
  }
   int space=2*n-2;
  for(int i=1;i<=n;i++)
  {
   
    for(int j=0;j<i;j++)
    {
        cout << "*";
    }
    for(int j=0;j<space;j++)
    {
        cout <<  " ";
    }
    for(int j=0;j<i;j++)
    {
        cout << "*";
    }
    
    space = space-2;
    cout << endl;
  }
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
      int n;
      cin >> n;
      pattern19(n);
    }
   
    
}