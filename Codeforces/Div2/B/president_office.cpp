#include <bits/stdc++.h>
 
using namespace std;
 std::vector<int> subset;
 
int main() {
    int n;
    int m;
    char c;
    map<char,string> store;
    cin>>n>>m>>c;    
    char g[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>g[i][j];
        }
    }  
 
    std::set<char> s;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
          if(g[i][j] == c)
          {
                if(g[i-1][j] != '.' && g[i-1][j] != c && i-1 >=0)
                {
                    s.insert(g[i-1][j]);
                } 
                if(g[i+1][j] != '.' && g[i+1][j] != c && i+1 <= n-1)
                {
                    s.insert(g[i+1][j]);
                } 
                if(g[i][j-1] != '.' && g[i][j-1] != c && j-1 >= 0)
                {
                    s.insert(g[i][j-1]);
                } 
                if(g[i][j+1] != '.' && g[i][j+1] != c && j+1 <= m-1)
                {
                    s.insert(g[i][j+1]);
                }
          }
       }
    }
 
    cout<<s.size();
    return 0;
}