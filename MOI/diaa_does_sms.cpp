#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int m;
    bool matches = false;

    string str1;
    map<string, string> msis;
    map<string, string> regions;

    cin >> n;

	for(int i = 0;i<n;i++)
	{
	        cin >> str1;
		size_t plus = str1.find('+'); 
		size_t virgule = str1.find(','); 
		string key = str1.substr(plus, virgule);
		string value =  str1.substr(virgule+1);
		msis[key] = value; 
	}

	cin>>m;
		
	for(int i = 0;i<m;i++)
	{
		cin>>str1;
	        size_t virgule = str1.find(','); 
                size_t plus = str1.find('+');
		string value = str1.substr(0,virgule);
		string key = str1.substr(plus);
		if(key != "" && value != "")
		{
			regions[key] = value; 

		}
	}

	 for (const auto& pair : regions) {
       	     auto it = msis.find(pair.first); 
		if(it != msis.end()){
		    matches=true;
		    cout << pair.first<<",";
				cout<<msis[pair.first]<<",";
				cout<<pair.second<<endl; 
		}
          }
	    if(!matches){
	        cout << "nomatch";
	    }

    return 0;
}
