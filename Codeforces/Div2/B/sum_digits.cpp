#include <bits/stdc++.h>
 
using namespace std;
 
 
int spellTea(string s)
{
    int sum=0;
    for(size_t i=0;i<s.size();i++)
    {
        sum+=s[i] - '0';
    }
    return sum;
}
 
int main() {
    string s;
    cin>>s;
    int c=1;
    int br=spellTea(s);
 
    while(to_string(br).size() > 1)
    {
        br=spellTea(to_string(br));
        c++;
    }
    (s.size() <= 1 ? cout<<0 : cout<<c);
    return 0;
}