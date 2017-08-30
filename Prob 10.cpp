#include <iostream>
using namespace std;

int main() {
	
 float s1, s2, s3, s4, s5, total, avg, percentage;
 cout<< "Enter marks of five subjects :";
 
 cin >>s1>>s2>>s3>>s4>>s5;
 total=s1+s2+s3+s4+s5;
 avg=total/5;
 percentage=total/500*100;
 
 cout << "The total is " << total<<endl<<"The average is "<<avg<<endl<<"The percentage is "<<percentage;
	return 0;
}
