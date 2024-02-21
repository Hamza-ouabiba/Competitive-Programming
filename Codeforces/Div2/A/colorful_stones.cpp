#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
   string c;
   size_t k=0;
   string s;
   cin>>s;
   cin>>c;
   for(size_t i=0;i<c.length();i++)
   {
       if(k<s.length())
       {
          if(c[i] == s[k])
            k++;
       }
   }
   cout<<k+1;
   return 0;
}
