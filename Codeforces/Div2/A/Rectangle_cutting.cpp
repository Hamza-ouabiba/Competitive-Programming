#include <bits/stdc++.h>
using namespace std;
 
bool sameRectangle(int a1,int b1,int a2,int b2)
{
    return (a1 == b2 && b1 == a2) || (a1 == a2 && b1 == b2);
}
 
int main() {
    int t;
    int a;
    int b;
    vector<string> tests;
    bool test1;
    bool test2;
    cin>>t;    
    if(t >= 1 && t<= pow(10,4))
    {
        while(t --)
        {
            cin>>a;
            cin>>b;
            test1 = true;
            test2 = true;
            if(a%2 == 0 || b%2 == 0)
            {
                if(b % 2 == 0)
                {
                    //cuttable : and forming a new rectangle : 
                    int b2 = b/2;
                    int a2 = 2*a;
                    test1= sameRectangle(a,b,a2,b2);
                } 
                if(a % 2 == 0)
                {
                    //cuttable : and forming a new rectangle : 
                    int a2 = a / 2;
                    int b2 = b * 2;
                    test2= sameRectangle(a,b,a2,b2);
                } 
 
                if(!test1 || !test2)
                {
                    tests.push_back("Yes");
                } else 
                {
                    tests.push_back("No");
                }
 
            }  else tests.push_back("No");
        }
 
        for (const auto &pair : tests) {
            cout<<pair<<endl;
	    }
    }
    
    return 0;
}