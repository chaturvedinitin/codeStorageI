#include<iostream>
using namespace std;
class Room{
    public:
    int length;
    int breadth;
    int height;
    Room(){
        cout << "constructor method 1 is called while creating object" << endl;
    }
    Room(int l, int b, int h){
        cout << "constructor method 2 is called while creating object" << endl;
        length = l;
        breadth = b;
        height = h;
    }
    Room(Room &r1){
        cout << "constructor 4 is called" << endl;
        length = r1.length;
        breadth = r1.breadth;
        height = r1.height;
    }
    int area(){
        return length*breadth;
    }
    int volume(){
        return length*breadth*height;
    }
    ~Room(){
        cout << "destructor is called" << endl;
    }
};
int main()
{
    Room room1;

    room1.length = 10;
    room1.breadth = 3;
    room1.height = 20;

    Room room2(4,5,8);
    Room room3;

    cout << "area is " << room2.area() << endl << "volume is " << room2.volume() << endl;
    cout << "area is " << room1.area() << endl << "volume is " << room1.volume() << endl;

    Room room4(room2);
    cout << room4.length << endl;
    cout << room4.breadth << endl;
}