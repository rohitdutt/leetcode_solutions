#include<iostream>
#include<memory>
#include<vector>
using namespace std;

template<class T>
class DynamicArray{
    private:
        T* A;
        T* secondary_array;
        int sizeOfArray;
        int lengthOfArray;
        int elementsCanInsert;
    public:   
    DynamicArray(){
        elementsCanInsert=1;
        A = new T[elementsCanInsert];
        sizeOfArray=0;
        lengthOfArray=0;
        
    }

    void push_back(int value){
        if(lengthOfArray<elementsCanInsert){
            A[lengthOfArray] = value;
            sizeOfArray= sizeOfArray + sizeof(T);
            lengthOfArray++;
        }else{
            secondary_array = new T[elementsCanInsert];
            for(int i=0;i<lengthOfArray;i++){
                secondary_array[i]=A[i];
            }
            delete A;
            A = new T[2*elementsCanInsert];
            elementsCanInsert = 2* elementsCanInsert;
            A = secondary_array;
            secondary_array=NULL;
            delete secondary_array;
        }
    }

    T at(int index){
        return A[index];
    }

    int size(){
        return sizeOfArray;
    }

    int length(){
        return this->lengthOfArray;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> v1;
    DynamicArray<int> ar;
    for(int i=0;i<1000;i++){
        ar.push_back(i);
    }
    for(int i=0;i<ar.length();i++){
        cout<<ar.at(i)<<endl;
    }
    return 0;
}
