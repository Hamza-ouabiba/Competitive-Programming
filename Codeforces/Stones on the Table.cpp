
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
   size_t n;
   string s;
   int count=0;
   cin>>n;
   cin>>s;
   if(s.length() == n)
   {
      for(size_t i=0;i<n;i++)
      {
         if((i+1) < n)
         {
            if(s[i] == s[i+1])
              count++;
         }
      }
      cout<<count;
   }
   return 0;
}
