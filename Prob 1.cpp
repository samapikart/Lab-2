#include <iostream>
using namespace std;

int main() {
	
 float cm, m, km;
 
 cout << "Enter length in cm :" << endl;
 cin >> cm;
 m=cm/100;
 km=cm/100000;
 cout << "Length in meter is" << endl << m << endl << "and kilometer is" << endl << km;
	return 0;
}
