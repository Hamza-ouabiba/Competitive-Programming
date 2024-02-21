#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
   int n;
   vector<char> a;
   vector<int> res;
   char ai;
   int t;
   cin>>t;
   while(t--)
   {
      a.clear();
      cin>>n;
      for(int i=0;i<n;i++)
      {
         cin>>ai;
         a.push_back(ai);
      }
      int count=0;
      for(int i=0;i<n;i++)
      {
         if(i + 1 < n)
         {
             if(a[i+1] != '*')
             {
               if(a[i+1] == '@')
                 count++;
             } else 
             {
                if((i+2) < n)
                {
                  if(a[i+2] != '*')
                  {
                     if(a[i+2] == '@')
                       count++;
                     i++;
                  } else break;
                } else break;
             }
         } else break;
      }
 
      res.push_back(count);
 
   }
 
   for(size_t i=0;i<res.size();i++)
      cout<<res[i]<<endl;
   return 0;
}