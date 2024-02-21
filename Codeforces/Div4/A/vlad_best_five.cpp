#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    int count1=0;
    int count2=0;
    string ch;
    vector<char> a;
    cin >> t;
 
    while(t--)
    {
      count1=0;
      count2=0;
       cin >> ch;
       for(size_t i=0;i<ch.length();i++)
       {
          if(ch[i] == 'A')
            count1++;
          else count2++;
       }
 
       (count1 > count2 ? a.push_back('A') : a.push_back('B'));
    }
 
    for(size_t i=0;i<a.size();i++)
    {
      cout<<a[i]<<"\n";
    }
 
    return 0;
}