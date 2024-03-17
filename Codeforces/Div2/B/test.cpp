#include <bits/stdc++.h>
#define IN insert
#define Pb push_back

using namespace std;

bool isNormal(vector<int> t) {
    return t[0] < t[1] && t[1] < t[2];
}

long getMaximumProfit(vector<int> price, vector<int> profit) {
     int maxProf=-1;
     vector<int> maxProfit;
     vector<int> maxBen;
     vector<int> indic;
     if(price.size() == profit.size()) {
         for(size_t i=0;i<price.size();i++) {
            int count=0;
            maxProfit.clear();
            maxBen.clear();
            indic.clear();
            maxBen.push_back(profit[i]);
            maxProfit.push_back(price[i]);
            indic.push_back(i);
            for(size_t j=i+1;j<price.size();j++) {
                if(i != j ) {
                    if(count <= 1) {
                        maxProfit.push_back(price[j]);
                        maxBen.push_back(profit[j]);
                        indic.push_back(j);
                       count++;
                    }
                }
            }
            if(maxProfit.size() == 3) {
                if(isNormal(indic) && isNormal(maxProfit)) {
                    maxProf = max(maxProf,std::accumulate(maxBen.begin(),maxBen.end(),0));
                }
            }       
        }
     }
     return maxProf;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> arr = {1,11,12,12,12};
    vector<int> arr2 = {2,3,4,5,6};
    cout<<getMaximumProfit(arr,arr2);
    return 0;
}