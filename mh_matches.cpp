#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int incrementing = 0;
	int count = 0;
	int max;
	int move = 0;
	cin>>s;
	int taille = s.length();
	int indexFin = s.length();
	max = 0;
	while(indexFin > 0)
	{
		count = 0;
		incrementing++;
		indexFin--; // removing one character :
		string compare = s.substr(0,indexFin); 
		string origi = s.substr(incrementing,taille+1);
		for(size_t i = 0;i<compare.length();i++)
		{
			if(compare[i] == origi[i])
				count++;
			if(count >max)
			{
				move = incrementing;
				max = count;
			}
		}
		
	}
		cout<<max<<" "<<move<<endl;
    return 0;
}
