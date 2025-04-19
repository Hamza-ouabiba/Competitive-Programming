#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> ar;
    string s;
    string bas = "hello";
    string final_;
    cin >> s;

    int j = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i] == bas[j]) {
            final_.push_back(s[i]);
            j++;
        }
    }
    final_ == bas ? cout<<"YES" : cout<<"NO";
    return 0;
}
