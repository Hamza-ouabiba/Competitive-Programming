#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int n;
    vector<int> a;
    int ai;
    int k;
    cin>> n >> k;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ai;
        a.push_back(ai);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] < 0 && k > 0)
        {
            a[i]*=-1;
            k--;
        }
         sum+=a[i];
    }
    //find the min :
    
    int min = a[0];
    for(int i=1;i<n;i++)
    {
        if(min > a[i])
          min=a[i];
    }
 
    if(k > 0)
    {
        if(k % 2 == 0)
        {
            cout<<sum;
        } else 
        {
            cout<<sum-min+min*-1;
        }
    } else cout<<sum;
    return 0;
}