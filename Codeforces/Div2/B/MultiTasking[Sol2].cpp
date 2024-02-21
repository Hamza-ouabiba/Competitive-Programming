#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    vector<int> a;
    int ai;
    set<pair<int, int>> p;
    int n,m,k;
    cin>>n >> m >> k;

    for(int i=0;i<n;i++)
    {
      a.clear();
      for(int i=0;i<m;i++)
      {
        cin>>ai;
        a.push_back(ai);
      }
      //for ascending order :
      if(k == 0)
      {
        for(int i=0;i<m;i++)
        {
          for(int j=i+1;j<m;j++)
          {
            if(a[i] > a[j])
            {
              p.insert({i+1,j+1});
            } 
          }
        }

      } else 
      {
          //for descending order :
        for(int i=0;i<m;i++)
        {
          for(int j=i+1;j<m;j++)
          {
            if(a[i] < a[j] )
            {
              p.insert({j+1,i+1});
            } 
          }
        }
      }
    }
    cout<<p.size()<<'\n';
    for(auto elm : p)
    {
      cout<<elm.first<<" "<<elm.second<<'\n';
    }
    return 0;
}