#include <bits/stdc++.h>
#define IN insert
#define Pb push_back

using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int v[n];
    set<int> s;
    for(int i=0;i<n;i++) 
        cin >> v[i];

    for(int i=0;i<n;i++) {
        int count=1;
        int prev=i;
        int next=i;
        //test for previous 
        if(prev - 1 >= 0) {
            prev--;
            if(v[i] >= v[prev])
            {
                count++;
                while(prev-1>=0) {
                    if(v[prev] >= v[prev-1] )
                        count++;
                    else break;
                    prev--;
              }
            }
            
        }
        
        //test for next : 
        if(next + 1 <= n-1) {
            next++;
            if(v[i] >= v[next])
            {
                count++;
                while(next+1 <= n-1) {
                    if(v[next] >= v[next+1])
                      count++;
                    else break;
                    next++;
                }
            }
        }
        s.insert(count);
    }

    auto maxElement = max_element(s.begin(), s.end());

    cout<<*maxElement;
    return 0;
}