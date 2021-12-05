#include<iostream>
#include<vector>

using namespace std;

template<class T>
class Stack{
    private:
        vector<T> data;
        int top;
        int size;
    public:
        void push(T value){
            data.push_back(value);
            top++;
        }
        void pop(){
            data.pop_back();
            top--;
        }
        T top(){
            return data[top];
        }
        int size(){
            return top;
        }
        bool isEmpty(){
            return top == 0;
        }
};

