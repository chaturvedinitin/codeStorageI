#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    // add at end
    v.push_back(6);
    v.erase(v.begin()+1);
    v.at(0) = 0;
    cout << v.at(0) << endl;
    
    for(int i: v){
        cout << i << " ";
    }cout << endl;

}