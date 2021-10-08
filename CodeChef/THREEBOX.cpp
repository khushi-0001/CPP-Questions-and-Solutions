#include <iostream>
using namespace std;
#define tc ll t sc cin>> t sc while(t--)
#define sc;
#define ll long long

int main() {
	// your code goes here
	tc{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a+b+c<=d){
	    cout<<"1\n";
	}
	else if(a+b<=d || a+c<=d){
	    cout<<"2\n";
	}
	else{
	    cout<<"3\n";
	}
		}
	return 0;
}
