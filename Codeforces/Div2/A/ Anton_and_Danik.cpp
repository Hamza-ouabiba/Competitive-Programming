#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long n;
    string s;
    int d=0;
    int a=0;
 
    cin>>n; 
    cin>>s;
 
    if(n>=1 && n<=pow(100,3))
    {
        for(int i = 0;i<n;i++)
        {
            if(s[i] == 'A')
                a++;
            else if(s[i] == 'D')
                d++;
        }
        if( a > d)
            cout<<"Anton";
        else if(a < d)
            cout<<"Danik";
        else 
            cout<<"Friendship";
    }
    return 0;
}
