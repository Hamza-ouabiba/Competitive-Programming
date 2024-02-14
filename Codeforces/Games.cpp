#include <bits/stdc++.h>
 
using namespace std;
 
bool isSameHostGuest(int t1[2],int t2[2])
{
    return t1[0] == t2[1] ;
}
int main() {
   int n;
   int c=0;
   cin>>n;
   int m[n][2];
 
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<2;j++)
      {
            cin>>m[i][j];
      }
   }
 
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<=n;j++)
      {
          if(i != j)
          {
              if(isSameHostGuest(m[i],m[j]))
                c++;
          }
      }
   }
 
   cout<<c;
   return 0;
}
