//Perform addition operation on complex data using class and object. The program should ask for real and imaginary part of two complex numbers, and display the real and imaginary parts of their sum.


#include <iostream>

using namespace std;

class Imagin{
	public:

	double x,y;

	Imagin(double n1, double n2){

	x=n1;y=n2;}
};

int main(){

	double no1,no2;
	cout<< "Enter the real number:";
	cin>> no1;
	cout<< "Enter the imaginary number:";
	cin>> no2;
	Imagin nomer1(no1,no2);
	cout << "second number \n";
  
  double no3,no4;
	cout<< "Enter the real number:";
	cin>> no3;
	cout<< "Enter the imaginary number:";
	cin>> no4;
	Imagin nomer2(no3,no4);

	double real;
  real = nomer1.x + nomer2.x;

  double imagin;
  imagin = nomer2.x + nomer1.y;

  cout << "the sum of the real parts is "<< real << "\n";
  cout << "the sum of the imaginary parts is "<<imagin;

  return 0;
}
