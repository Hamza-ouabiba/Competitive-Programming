#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int size;
 
    cin >> size;
    int arr[size+1];
    arr[0] = 0;
    for(int i=1;i<=size;i++) {
        cin >> arr[i];
    }
 
    int m = arr[0];
    for(int i=1;i<=size;i++) {
        if(arr[0] - arr[i] < m) {
            m = arr[0] - arr[i];
        }
    }
 
    cout<<abs(m);
    return 0;
}
