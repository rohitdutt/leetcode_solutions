#include<iostream>
#include<vector>
#include<map>
using namespace std;

class salesByMatch{
    map<int,bool> map1;
    int pairsFound;
    public:
    int sockMerchant(int n, vector<int> ar){
        pairsFound=0;
        for(int i=0;i<ar.size();i++){
            if(map1.empty()){
                map1[ar[i]]=true;
            }else if(map1[ar[i]]==false){
                map1[ar[i]]=true;
            }else{
                map1.at(ar[i])=false;
                pairsFound++;
            }
        }
        return pairsFound;
    }
};

int main(){
    salesByMatch sm;
    vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(1);
    vec1.push_back(3);
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(1);
    vec1.push_back(3);
    vec1.push_back(3);
    vec1.push_back(3);
    vec1.push_back(3);
    vec1.insert()
    cout<<sm.sockMerchant(10,vec1);
    return 0;
}
