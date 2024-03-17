#include <bits/stdc++.h>
#define IN insert
#define Pb push_back
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    int p1,p2;
    vector<pair<int,int>> p;
    cin >> n >> m;
    int sum_box=0;
    int sum_matches=0;
    for(int i=0;i<m;i++) {
        cin >> p1 >> p2; 
        p.Pb({p1,p2});
        sum_box+=p1;
        sum_matches+=p1*p2;
    }

    if(n >= sum_box) 
    {
        cout<<sum_matches;
        return 0;
    }
    int capacity = n;
    int sh=0;
    int h=0;
    if(p.size() > 1) {
        while(capacity > 0) {
        auto max_pair = max_element(p.begin(), p.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });

        if(max_pair->first > capacity) 
        {
            sh+=capacity*max_pair->second;
            capacity-=capacity;
        } else 
        {
            capacity-=max_pair->first;
            sh+=max_pair->first*max_pair->second;
        }
        p.erase(max_pair);
      }
    } else {
        sh = p[0].first*p[0].second;
        if(p[0].first <= n) {
            sh = p[0].first*p[0].second;
        } else 
        {
            sh = (p[0].first-n)*p[0].second;
        }
    };
    cout<<sh;
    return 0;
}