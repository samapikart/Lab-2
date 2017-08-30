#include <iostream>
using namespace std;

int main() {
	
 float C,F;
 
 cout << "Enter temperature in Fahrenheit :" << endl;
 cin >> F;
 C=(F-32)*5/9;
 cout << "Temperature in Celcius is" << endl << C;
	return 0;
}
