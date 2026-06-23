#include<iostream>
using namespace std;


void pattern20(int n)
{
   int space = 2*n-2;
   
   for(int i=1;i<=2*n-1;i++)
   {
    int star = i;
    if(i>n) 
    {
        star = 2*n-i;
        
    }

    for(int j=0;j<star;j++)
     {
        cout <<  "*";
     }
    for(int j =0;j<space;j++)
    {
        cout << " ";
    }
    for(int j=0;j<star;j++)
    {
        cout <<  "*";
     }
     
     if(i<n) 
     {
        space = space -2;
     }
        
     else
     {
        space = space +2;
     }
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
      pattern20(n);
    }

}