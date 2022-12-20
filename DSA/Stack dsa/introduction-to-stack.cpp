#include <bits/stdc++.h>
using namespace std;
class Stack{
    public :
    int top;
    int size;
    int *arr;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele){
        if(top>=size){
            cout<<"Overflow"<<endl;
        }
        arr[++top] = ele;
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else
        {
            cout<<"Underflow"<<endl;
        }
    }
    
    int peek(){
        if(top>=0 && top <= size)
            return arr[top];
        else
        cout<<"stack is empty"<<endl;
        return -1;
    }

    bool isempty() {
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};
int main()
{

    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(22);
    st.pop();
    cout<<st.peek()<<endl;
    
    st.push(10);
     cout<<st.peek()<<endl;

//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.pop();
//     int n = s.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
    
//     if(s.empty()){
//         cout<<"stack is empty"<<endl;
//     }
//     else
//     cout<<"stack is not empty"<<endl;
    return 0;
}