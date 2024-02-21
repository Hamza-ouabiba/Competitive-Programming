#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    vector<int> a;
    int ai;
    int n;
    int m;
    vector<int> b;
    map<int,int> store1;
    map<int,int> store2;
    int c1=1;
    int bi;
    long long f1=0;
    long long f2=0;
    cin >> n;
    if(n>= 1 && n<=pow(10,5))
    {
        for(int i=0;i<n;i++)
        {
            cin>>ai;
            if(ai >= 1 && ai<=n)
            {
                a.push_back(ai);
            }
        }
        cin >> m;
        if(m >= 1 && m<=pow(10,5))
        {
            for(int i=0;i<m;i++)
            {
                cin>>bi;
                if(bi >= 1 && bi<=n)
                    b.push_back(bi);
            }
            for(int i=0;i<n;i++)
            {
                store1.insert({a[i],i+1});
            }
             for(int i=n-1;i>=0;i--)
            {
                store2.insert({a[i],c1});
                c1++;
            }
            
            for(int i=0;i<m;i++)
                f1+=store1[b[i]];
 
            for(int i=0;i<m;i++)
               f2+=store2[b[i]];
 
            cout<<f1<<" "<<f2;
        }
    }
    return 0;
}
