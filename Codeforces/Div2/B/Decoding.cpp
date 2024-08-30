#include <bits/stdc++.h>
#define IN insert
#define Pb push_back

using namespace std;

string append(string s, bool prev, char ad) {
    if(prev == false) {
        s += ad;
    } else {
        s.insert(s.begin(), ad);
    }
    return s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sz;
    string s;

    cin >> sz >> s;

    if(sz % 2 == 0) {
         string e(1, s[1]);
         for(int i = 0; i < s.size(); i++) {
            if(i != 1) {
                e = append(e, i % 2 == 0 ? true : false, s[i]);
            }
        }
        cout << e;
    } else {
        string e(1, s[0]);
        for(int i = 1; i < s.size(); i++) {
            e = append(e, i % 2 == 0 ? false : true, s[i]);
        }
        cout << e;
    }

    return 0;
}
