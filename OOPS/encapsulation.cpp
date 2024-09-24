#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;

    public:
    //setter
    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }
    //getter
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};
int main()
{
    Rectangle r1;
    r1.setLength(2);
    cout << r1.getLength();
}