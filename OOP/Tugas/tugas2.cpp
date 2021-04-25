//Write a program with a mother class and an inherited daugther class.Both of them should have a method void display ()that prints a message (different for mother and daugther).
//In the main define a daughter and call the display() method on it.

#include <iostream>
using namespace std;

class Mother{
public:
	void display ()
  {
		cout << "Mother: Hinata\n";
		cout << "Mother: 40 years old\n";
	}
};
class Daughter : public Mother
{
public:
	void display ()
  {
		cout << "Daughter: Himawari\n";
		cout << "Daughter: 7 years old\n";
	}
};

int main ()
{
	Daughter da;
	da.display();
  
	Mother mo;
	mo.display();
	return 0;
}
