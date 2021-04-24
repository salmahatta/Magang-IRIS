//Write a class having two private variables and one member function which will return the area of the rectangle.

using namespace std;

class Rectangle 
{
 private:
    int length;
    int width;

 public:
    void panjanglebar(int x, int y)
    {
        length = x;
        width = y;
    }

    int Area()
    {
        return width*length;
    }
};

int main()
{
Rectangle rect;
  rect.panjanglebar(3,4);
  cout <<rect.Area()<<endl;

    return 0;
}
