#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i,string s)
{
     if(i>=s.size()/2)
     {
        return true;
     }
     if(s[i]!=s[s.size()-i-1])
     {
          return false;
     }

     return palindrome(i+1,s);
        
}

int main()
{
    int i=0;
    string s = "MADSM";
    cout << palindrome(i,s);

    
}