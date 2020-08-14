#include<iostream>
#include<list>
#include<map>
#include<string>
using namespace std;
class Lru{
    private:
        map<int,string> cachedItem;
        list<int> memoryArea;
        int size;
    public:
        Lru(int size){
            this->size=size;
        }

        void showData(){
            cout<<"Size of List"<<memoryArea.size()<<endl;
            cout<<"Size of Map"<<cachedItem.size()<<endl;
            for(int i:memoryArea){
                cout<<"list"<<i<<endl;
            }
        }

        void removeFromMap(int key){
             cachedItem.erase(key);
        }

        void addToMap(int key,string value){
             cachedItem.insert(pair<int,string>(key,value));
        }

        void addPage(int key,string value){
            if(memoryArea.size()<size){
                memoryArea.push_back(key);
                this->addToMap(key,value);
                // return false;
            }else{ 
                if(!cachedItem[key].empty()){
                    // return true;
                }else{
                    memoryArea.pop_front();
                    memoryArea.push_back(key);
                    this->removeFromMap(key);
                    this->addToMap(key,value);   
                    // return false;
                }   
            }
            this->showData();
        }
};


int main(int argc, char const *argv[]) {
    
    Lru lru(3);
    lru.addPage(1,"qwertyu");
    lru.addPage(3,"qwetyu");
    lru.addPage(2,"qertyu");
    lru.addPage(1,"qwertyu");
    lru.addPage(5,"qwertyu");
    lru.addPage(8,"qwertyu");
    lru.addPage(4,"qwertyu");
    return 0;
}

