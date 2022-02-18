
// In this program we explored the concept of friend function
#include <iostream>
using namespace std;

class Square; 
class Rectangle
{
    int width=4;
    int height=8;
    public:
    friend void display(Rectangle , Square );
};
class Square
{
    int side=10;
    public:
    friend void display(Rectangle , Square );
};
void display(Rectangle r, Square s)
{
    cout<<"Rectangle:"<< r.width * r.height;
    cout<<"\nSquare:"<< s.side * s.side;
}
int main () 
{
    Rectangle rec;
    Square sq;
    display(rec,sq);
    return 0;
}