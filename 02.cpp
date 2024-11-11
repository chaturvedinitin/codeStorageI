#include<iostream>
using namespace std;
class Bank{
private:
    string name;
    int balance;
public:
    Bank(string n, int bal){
        name = n;
        balance = bal;
        cout << n << " account is open with amount " << bal << endl;
    }

    ~Bank(){
        cout << "Destructor is called for " << name << endl;
    }
};

class SBI : public Bank{

};
int main()
{
    Bank account1("satyam", 500);
    Bank account2("Nitin", 2200);

    cout << "hello" << endl;
    cout << 4 << endl;


}