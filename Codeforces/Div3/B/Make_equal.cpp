#include <bits/stdc++.h>
 
using namespace std;
 
int howMuch(int a,int target)
{
   return a-target;
}
 
bool isAllSameAndDivi(vector<int> a,int n)
{
   int first=a[0];
   for(size_t i=1;i<a.size();i++)
   {
      if(a[i] != first)
         return false;
   }
   return true;
}
 
 
 
 
bool isMaking(vector<int> cn,int n,int sum)
{
   int to=0;
   for(int i=0;i<n;i++)
   {
      int rest=cn[i]-(sum/n);
      to+=rest;
      if(to < 0)
         return true;
   }
   return false;
}
 
 
 
int main() {
   vector<int> cn;
   int n;
   int a;
   int t;
   vector<string> store;
   int sum=0;
   cin>>t;
   while(t--)
   {
      sum=0;
      cn.clear();
      cin>>n;
      for(int i=0;i<n;i++)
      {
         cin>>a;
         sum+=a;
         cn.push_back(a);
      }  
      
      if(isMaking(cn,n,sum))
         store.push_back("NO");
      else store.push_back("YES");
   }
 
   for(size_t i=0;i<store.size();i++)
   {
      cout<<store[i]<<endl;
   }
   return 0;
}