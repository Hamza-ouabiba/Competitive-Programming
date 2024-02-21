#include <bits/stdc++.h>
 
using namespace std;
 
int finMax(vector<int> b)
{
    int min=b[0];
    for(size_t i=1;i<b.size();i++)
    {
        //if all numbers are less or greater than two don't take 
        if(min < b[i] && b[i] == 2)
            min = b[i];
    }
    return min;
}
 
int main() {
    int n;
    vector<int> a;
    vector<int>b;
    int ai;
    vector<int> g;
    vector<int> res;
    
    int t;
    cin>>t;
    while(t--)
    {
       cin>> n;
       a.clear();
         for(int i=0;i<n;i++)
         {
            cin>>ai;
            a.push_back(ai);
         }
         for(int i=0;i<n;i++)
         {
            if(i+1 < n)
               a[i+1]*=((a[i] / a[i+1])+1);
         }
       res.push_back(a[n-1]);
   }
 
    for(size_t i=0;i<res.size();i++)
       cout<<res[i]<<endl;
    return 0;
}