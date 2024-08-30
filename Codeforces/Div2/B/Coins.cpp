#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string arr[3];
    map<char, int> a = {{'A',0},{'B',0},{'C',0}};
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        if (arr[i][1] == '>') {
            a[arr[i][0]]++;
        } else {
            a[arr[i][2]]++;
        }
    }
    vector<pair<char, int>> sorted_a(a.begin(), a.end());
 
    sort(sorted_a.begin(), sorted_a.end(), [](const pair<char, int>& p1, const pair<char, int>& p2) {
        return p1.second < p2.second; 
    });
    if(a['A'] == 1 && a['B'] == 1 && a['C'] == 1) {
        cout<<"Impossible";
        return 0;
    }
    for(const auto & elm : sorted_a) {
        cout<<elm.first;
    }
    
    return 0;
}
