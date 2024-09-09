#include<iostream>
using namespace std;
enum GameState{
    init,
    menu,
    breakthrough
};
int main()
{
    GameState game1;
    cout << game1.init << endl;
    return 0;
}