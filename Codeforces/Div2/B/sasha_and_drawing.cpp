#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, k;
    vector<int> res;
    int t;
    cin>>t;
    while(t--)
    {
        cin >> n >> k;
        int diag=4*n-2;
        if(k==diag)
        {
            res.push_back((k/2)+1);
        } else 
        {
            if(k%2==0)
            {
                res.push_back((k/2));
            } else res.push_back(ceil((k/2))+1);
        }
    }
    for(size_t i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }
    return 0;
}