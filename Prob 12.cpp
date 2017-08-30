#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
 float p, t, r, ci;
 cout<< "Enter principal, time and rate :";
 
 cin >>p>>t>>r;
ci=p*(pow(1+(r/100),t)-1);
 cout << "The compound interest is " <<ci;
	return 0;
}
