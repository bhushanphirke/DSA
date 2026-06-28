#include<bits/stdc++.h>
using namespace std;

void prime_check(int n)
{  
    int count =0;

    for(int i=1;i*i<=n;i++)
    {  
        
        if(n%i==0)
        {
         count ++;
         if((n/i)%i==0)
           {
             count ++;
            }
        }
        
    }
    if(count == 2)
    {
         cout << "Number is Prime ";
    }
  
    }
   
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        prime_check(n);
           
    }
}