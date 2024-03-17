#include <bits/stdc++.h>
#define IN insert
#define Pb push_back

using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;

    cin >> t;

    while(t--) {
      string ch;
      cin >> ch;

      count(ch.begin(),ch.end(),'A') >= 3 ? cout<<'A'<<'\n' : cout<<'B'<<'\n';
    }
    return 0;
}