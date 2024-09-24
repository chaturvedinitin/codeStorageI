#include<iostream>
using namespace std;
class MyStack{
    int* arr;
    int size;
    int top;
    public:
    MyStack(){
        arr = new int(size);
        top = -1;
    }
    void push(int val){
        if(top==size-1){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop(){
        if(top==-1){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    void print(){
        for(int i = top; i>=0; i--){
            cout << arr[i] << endl;
        }cout << endl;
    }
};
int main()
{
    MyStack st;

    st.push(1);
    st.push(2);
    //pushing element in stack
    st.push(12);
    //remove top element in stack
    // st.pop();
    //to check whether stack is empty
    // cout << st.empty() << endl;
    //last or top element
    // cout << st.top() << endl;
    //to find out the size of stack
    // cout << st.size();
    st.print();
}