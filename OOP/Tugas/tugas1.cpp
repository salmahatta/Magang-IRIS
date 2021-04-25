//Write a program that defines a shape class with a constructor that gives value to width and height. The define two sub-classes triangle and rectangle, that calculate the area 
//of the shape area (). In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

#include <iostream>
using namespace std;

class Shape
{
protected:
	float width; 
  float height;
public:
	Shape (float a, float b){
		width = x;
		length = y;
	}
};
class Rectangle: public Shape{
public:
	float area (){
		return (length*width);
	}
};
class Segitiga: public Shape{
public:
	float area (){
		return (length*width/2);
	}
};

int main (){

	Rectangle rec;
	rec.set_data (3,4);
  cout << rec.area() << endl;
  
  Triangle tri;
	tri.set_data (7,8);
	cout << tri.area() << endl;
	return 0;
}
