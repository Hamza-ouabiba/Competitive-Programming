#include <bits/stdc++.h>
 
using namespace std;
 
bool isSame(int target,int sum)
{
   return target == sum;
}
 
int generationInt()
{
    return std::rand() % 26 + 1;
}
 
char getChar(int n)
{
  std::unordered_map<int, char> letterMap;
 
  for (int i = 1; i <= 26; ++i) {
      letterMap[i] = 'a' + i - 1;
  }
  return letterMap[n];
}
 
string getSmallest(vector<string> s)
{
    auto smallestString = std::min_element(s.begin(), s.end(),
        [](const std::string& a, const std::string& b) {
            return a.compare(b) == -1;
        });
    return *smallestString;
}
 
 
 
string formingInt(int n)
{
   int a;
   int b;
   int c;
   int count=0;
   int match;
   vector<string> pos;
   for(int i=1;i<=26;i++)
   {
    for(int j=1;j<=26;j++)
    {
      for(int z=1;z<=26;z++)
      {
         if(isSame(n,i+j+z))
         {
          string result = {getChar(i),getChar(j),getChar(z)};
          pos.push_back(result);
         }
      }
    }
   }
   return getSmallest(pos);
}
 
int main() {
   int c;
   int tr;
   vector<string> strings;
   std::srand(static_cast<unsigned int>(std::time(nullptr)));
   cin>>c;
   while(c--)
   {
     cin>>tr;
     strings.push_back(formingInt(tr));
   }
 
   for(size_t i=0;i<strings.size();i++)
   {
     cout<<strings[i]<<endl;
   }
   return 0;
}
