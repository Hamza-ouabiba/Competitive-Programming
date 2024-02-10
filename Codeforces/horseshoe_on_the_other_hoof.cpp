#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int count = 0;
    int color = count;
    vector<int> colors;
    bool isOc = false;
    int inp;
    for(int i = 0;i<4;i++)
    {
        if(inp >= 1 && inp <= pow(10,9))
        {
            cin>>inp;
            colors.push_back(inp);
        }
    }
 
    for(int i = 0;i<4;i++)
    {
        isOc = false;
        for(int j = i+1;j<4;j++)
        {
            if(colors[i] == colors[j])
            {
                isOc = true;
                break;
            }
        }
        if(!isOc)
          count++;
    }
    cout<<4-count;
    return 0;
}
