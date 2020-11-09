#include<iostream>
#include<map>
using namespace std;

class Solution{
    map<string,string> phoneBook;
    public:
    void addContact(string name,string contactNumber){
        std::pair<string,string> contact (name,contactNumber);
        phoneBook.insert(contact);
    }

    string getContact(string name){
        try{
            return phoneBook.at(name);
        }catch(exception e){
            return "Not Found";
        }        
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    int n;
    cin>>n;
    string name,contactNumber;
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>contactNumber;
        s.addContact(name,contactNumber);
    }
    while (cin>>name){
        cout<<s.getContact(name);
    }
    return 0;
}


