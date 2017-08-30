#include <iostream>
using namespace std;

int main() {
	
 float p, t, r, si;
 cout<< "Enter principal, time and rate :";
 
 cin >>p>>t>>r;
 si= (p*t*r)/100;
 cout << "The simple interest"<<endl<<si;
	return 0;
}
