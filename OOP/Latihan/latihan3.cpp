// Write a c++ class called 'student' with
   //Data members:
   //name(char type),
   //marks1,marks2 (integer type)
//The program asks the user to enter name and marks. Then calc_media() calculates the media note and disp() display name and total media mark on screen in different lines.

#include <iostream>


using namespace std;

class Student{

	public:
	char *name;
	int mark1;int mark2;

	Student(char* n, int m1,int m2){
	name=n;mark1=m1;mark2=m2;
	}

	int calc_media(){return (mark1+mark2)/2;}

	void disp(){
	cout << name << " \n media:"<< calc_media() <<"\n";
	}

};

int main(){

	char* n;int m1,m2;

	cout << "Enter name:";
	cin>> n;
	cout << "Enter marks of two subjects:";
	cin>> m1;
	cin>> m2;
	Student student1(n,m1,m2);
	student1.disp();

	return 0;
}
