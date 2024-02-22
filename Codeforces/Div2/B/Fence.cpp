#include <bits/stdc++.h>
#define IN insert
#define PB push_back

typedef size_t _;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> a;
    int ai;
    int n;
    int k;
    cin >> n >> k ;
    vector<int> p(n+1);
  
    for(int i=0;i<n;i++)
    {
        cin>>ai;
        a.PB(ai);
    }
    p[0] = 0;
    for(int i=1;i<n+1;i++)
        p[i] = p[i-1] + a[i-1];

    int min_=INT_MAX;
    int pos=0;
    for(int i=0;i<n+1;i++)
    {
        if(i+k < n+1)
        {
           if(p[i+k] - p[i] < min_)
            {
                min_=p[i+k]-p[i];
                pos=i;
            }
        }
    }
    cout<<pos+1;
    return 0;

}