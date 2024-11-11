#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    map<string, int> m;

    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    pair<string, int> pair2("love", 2);
    m.insert(pair2);

    m["mera"] = 1;
    m["mera"] = 2;
    
    cout << m["mera"] << endl;
    cout << m["unknownkey"] << endl; // makes entry
    cout << m.at("unknownkey") << endl; // dont make entry

    cout << m.size() << endl;


    //to check a key is present
    cout << m.count("bro") << endl;
    cout << m.count("love") << endl;

    //erase
    m.erase("love");

    cout << m.size() << endl;

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }


    map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }
    


    return 0;
}