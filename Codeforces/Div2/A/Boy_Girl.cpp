#include <bits/stdc++.h>

using namespace std;

bool containChar(char c,vector<char> v)
{
   for(size_t i=0;i<v.size();i++)
   {
     if(v[i] == c)
       return true;
   }
   return false;
}

int main() {
    string s;
    int c=0;
    vector<char> occ;
    cin>>s;

    for(size_t i = 0;i<s.length();i++)
    {
        if(occ.size() == 0 || !containChar(s[i],occ))
        {
           occ.push_back(s[i]);
           c++;
        }
    }

    (c % 2 == 0 ? cout<<"CHAT WITH HER!" : cout<<"IGNORE HIM!");
    return 0;
}
