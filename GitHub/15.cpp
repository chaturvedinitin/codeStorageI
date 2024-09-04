#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int section;
    int roll;
    int age;

    void set_info(string name, int section, int roll, int age){
        this->name = name;
        this->section = section;
        this->roll = roll;
        this->age = age;
    }
};
int main(){
    // Student name1("Prabhu", 1, 10, 25);
    // Student name2("Arib", 2, 11, 20);
    // Student name3("Aditya", 3, 12, 15);
    Student name1;
    Student name2;
    Student name3;
    name1.set_info("Prabhu", 1, 10, 25);
    name1.set_info("Arib", 1, 10, 25);
    name1.set_info("Aditya", 1, 10, 25);
    // name1.name = "Prabhu";
    // name2.name = "Arib";
    // name3.name = "Aditya";
    cout << name1.name << " " << name1.age << " " << name1.roll<< endl;
    cout << name2.name << " " << name1.age << " " << name1.roll<< endl;
    cout << name3.name << " " << name1.age << " " << name1.roll<< endl;
    
}