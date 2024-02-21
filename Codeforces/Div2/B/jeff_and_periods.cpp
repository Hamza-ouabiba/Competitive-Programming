#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
   int n;
   vector<int> a;
   vector<int> m;
   map<int,int> res;
   map<int,int> co;
   map<int,int>counte;
   int ai;
   cin>>n;
   for(int i=0;i<n;i++)
   {
      cin>>ai;
      a.push_back(ai);
      if(counte.find(a[i]) == counte.end()) {
         counte.insert({a[i],1});
      } else counte[a[i]]+=1;
   }
   for(int i=0;i<n;i++)
   {
        if(res.find(a[i]) == res.end())
        {
            if(counte[a[i]] > 1)
            res.insert({a[i],i});
            else co.insert({a[i],0});
            continue;
        } 
        if(co.find(a[i]) == co.end() && find(m.begin(),m.end(),a[i]) == m.end())
        {
            co.insert({a[i],i-res[a[i]]});
        } else 
        {
            if(i-res[a[i]] != co[a[i]])
            {
                co.erase(a[i]);
                m.push_back(a[i]);
            }
        }
      res[a[i]] = i;
   }
 
   cout<<co.size()<<endl;
 
   for(const auto & elm : co)
      cout<<elm.first<<" "<<elm.second<<endl;
    
    return 0;
}