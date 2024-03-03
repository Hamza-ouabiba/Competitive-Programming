#include <bits/stdc++.h>
#define IN insert
#define Pb push_back

using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,n;
    map<int,pair<int,int>> m;
    cin >> n >> a;
    int v[n];
    int count=0;

    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    if(v[a-1] == 1)
       count++;

    for(int i=0;i<n;i++) {
        if(i == a-1) {
            for(int j=0;j<n;j++) {
                if(i != j) {
                    auto it = m.find(abs(i-j));
                    if(it == m.end()) {
                        m.insert({abs(i-j),{j,-1}});
                    } else
                        m[abs(i-j)].second = j; 
                }
            }
        }
    }

    for(auto & elm : m) {
        if(elm.second.second != -1) {
            if(v[elm.second.first] == 1 && v[elm.second.second] == 1)
              count+=2;
        } else if(v[elm.second.first] == 1) count++;
    }

    cout<<count;
    return 0;
}