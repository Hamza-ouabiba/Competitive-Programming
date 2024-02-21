#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    int h;
    int v;
    int width = 0;
    vector<int> a;
    cin>>n>>h;
    if((n>=1 && n<=1000) && (h>=1 && h<=1000))
    {
        for(int i = 0;i<n;i++)
            {
                cin>>v;
                if(v >= 1 && v<=2 * h)
                {
                    a.push_back(v);
                    if(v > h)
                        width+=2;
                    else 
                        width+=1;
                }
            }
            
            cout<<width;
    }
    return 0;
}
