#include<iostream>
using namespace std;
class Room{
    public:
    int length;
    int breadth;
    int height;
    int area(){
        return length*breadth;
    }
    int volume(){
        return length*breadth*height;
    }
    void set_print(int length, int breadth, int height){
        this->length = length;
        this->breadth = breadth;
        this->height = height;
        cout << "Area of room is: "<< this->area() << endl;
        cout << "Volume of room is: "<< this->volume() << endl;
    }
};
int main()
{
    Room room1;

    // room1.length = 10;
    // room1.breadth = 3;
    // room1.height = 20;

    // cout << "area is " << room1.area() << endl << "volume is" << room1.volume() << endl;

    room1.set_print(1,2,3);
}