#include <bits/stdc++.h>

using namespace std;

int movesCounted(int m[5][5])
{
   int loci=-1;
   int locj=-1;
   bool f=false;
   for(int i=0;i<5;i++)
   {
    for(int j=0;j<5;j++)
    {
       if(m[i][j] == 1)
       {
         loci = i;
         locj = j;
         f = true;
         break;
       }
    }
    if(f)
      break;
   }
   return abs(loci-2) + abs(locj-2);
}

int main() {
    int m[5][5];
    for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
        cin>>m[i][j];
    }
    cout<<movesCounted(m);
    
    return 0;
}
