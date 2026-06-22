#include<iostream>
using namespace std;

void pattern17(int n)
{
   for(int i=0;i<n;i++)
   {
    char ch = 'A';
    for(int j=0;j<n-i;j++)
    {
        cout << " ";
    }
    for(int j=0;j<=2*i;j++)
    {
      cout << ch;
        if(j<(2*i)/2)
        {
          ch++;
        }
        else
        {
          ch--;
        }
        
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
    pattern17(n);
   }
    
}