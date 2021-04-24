Problem : Write a program and input two integers in main and pass them to default constructor of the class. Show the result of the additon of two numbers.
Solution : 

#include <iostream>

using namespace std;

class Number
{
 public:
    int sum(int a, int b)
    {
        return a+b;
    }
};

int main()
{
    Number angka;
    int a, b;
	  cout<<"Enter first number : ";
  	cin>>a;
	  cout<<"Enter second number : ";
  	cin>>b;
  	cout << "Jumlah angka adalah:"<< angka.sum(a,b)<<endl;

	
	return 0;
}
