#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    int n;
    cin>>t;
    while(t--)
    { 
        cin>>n;
        string a[n];
 
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        int col=-1;
        int row=-1;
        for(int i=0;i<n;i++)
        {
         for(int j=0;j<n;j++)
          {
             if(a[i][j] == '1')
             {
                col = j;
                row=i;
                i=n;
                break;
             }
          }
        }
 
        if(a[row+1][col] == '1')
        {
          if(a[row][col+1] == '1')
          {
             cout<<"SQUARE\n";
          } else cout<<"TRIANGLE\n";
        } else {
           cout<<"TRIANGLE\n";
        }
    }
    return 0;
}
