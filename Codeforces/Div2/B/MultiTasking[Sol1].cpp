#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    vector<int> a,b;
    multimap<int,int> p;
    int n,ai,k,m;
    cin>>n>>m>>k;

    for(int i=0;i<n;i++)
    {
      a.clear();
      b.clear();
      for(int i=0;i<m;i++)
      {
        cin>>ai;
        b.push_back(ai);
        a.push_back(ai);
      }

      if(k == 0) sort(b.begin(),b.end()); else sort(b.rbegin(),b.rend());
      for(int i=0;i<m;i++)
      {
        if(a[i] != b[i])
        {
          auto it = std::find(a.begin(), a.end(), b[i]);
          int index = std::distance(a.begin(), it);
          p.insert({b[i],a[i]});
          int temp;
          temp = a[i];
          a[i] = a[index];
          a[index] = temp;
        }
      }
    }

    cout<<p.size()<<'\n';
    for(auto elm : p)
    {
      cout<<elm.first<<" , "<<elm.second<<endl;
    }
    return 0;
}