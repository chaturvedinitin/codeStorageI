#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    //pushing element in stack
    st.push(12);
    //remove top element in stack
    st.pop();
    //to check whether stack is empty
    cout << st.empty() << endl;
    //last or top element
    cout << st.top() << endl;
    //to find out the size of stack
    cout << st.size();
}