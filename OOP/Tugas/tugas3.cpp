//Write a probram with a mother class animal. Inside it define a name and an age variables, and set_value() function.Then create two bases variables Zebra and Dolphin which 
//write a message telling the age, the name and giving some extra information (e.g. place of origin).

#include <bits/stdc++.h>

using namespace std;

class Animal
{       
    public:
        int age;
        string name;
        string color;
  
        void set_value(int age, string name, string color)
        {
            this->age=age;
            this->name=name;
            this->color=color;
        }
};

class cat : public Animal
{
    public:
        void output()
        {
            cout << name << endl << age << endl << color << endl ;
        }
};

class rat: public Animal{
    public:
        void output()
        {
            cout << name << endl << age << endl << color << endl ;
        }
};

int main(){
  
    int age; string name; string color;
    cin >> age; cin >> name; cin >> color;
  
    cat kucing;
    kucing.age= 5;
    kucing.name= "meky";
    kucing.color= "brown";
  
    kucing.set_value(age, name, color);
    kucing.output();
  
    rat tikus;
    tikus.age= 2;
    tikus.name= "dicky";
    tikus.color= "black";

    tikus.set_value(age, name, color);
    tikus.output();
}
