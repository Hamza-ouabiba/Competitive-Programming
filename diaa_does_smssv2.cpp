#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int m; 
    int matches = 0;
    cin >> n;

    string str1;
    map<string, string> msis;
    map<string, string> regions;
    if (n >= 0 && n <= 100) {
        while(n > 0)
	{
		cin >> str1;
		msis[str1.substr(str1.find('+'),str1.find(','))] = str1.substr(str1.find(',')+1); 
		n--;
	}

	cin>>m;

	if(m>= 1 && m<= 100)
	{
		str1.clear();
		while(m > 0)
		{
			cin>>str1;
			regions[str1.substr(str1.find('+'))] = str1.substr(0,str1.find(','));
			m--;
		}
	}
		
	for (const auto &pair : regions) {
		if(msis[pair.first] != "")
		{
			cout << pair.first <<","<<msis[pair.first]<<","<<pair.second<<endl;
			matches = 1;
		}
	}
	if(matches == 0)
		cout<<"nomatch";
    }
	

    return 0;
}
