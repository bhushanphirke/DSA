#include<bits/stdc++.h>
using namespace std;

void GCD(int n , int m)
{
    int gcd=1;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        {
            gcd = i;
        }
    }
    cout << gcd;
}

int main()
{
    int t;
    cin  >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        int m;
        cin >> n >> m;
        GCD(n,m);
    } 
}