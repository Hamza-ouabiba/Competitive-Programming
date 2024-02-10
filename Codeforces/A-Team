#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    int inp;
    int count = 0;
    int num = 0;
    cin>>n;
    if(n >= 1 && n<=pow(10,3))
    {
        while(n > 0)
        {
            count = 0;
            for(int i = 0;i<3;i++)
            {
                cin>>inp;
                if(inp == 1)
                  count++;
            }
            if(count >= 2)
              num++;
            
            n--;
        }
        cout<<num;
    }
    return 0;
}
