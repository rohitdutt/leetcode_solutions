#include<iostream>
#include <algorithm> 
#include<vector>
using namespace std;

class Solution{
    int q1,q2,q3;
    vector<int> vq1,vq2;
public:
    void findQuartiles(vector<int> v1){
        sort(v1.begin(),v1.end());
        if((v1.size()%2)!=0){
            q2 = v1.at((v1.size()/2));
            vq1.assign(v1.begin(), (v1.begin()+(v1.size()/2)));
            vq2.assign((v1.begin()+(v1.size()/2)+1), v1.end()); 
            q1 = vq1.at((vq1.size()/2));
            q3 = vq2.at((vq2.size()/2));
            cout<<q1<<endl;
            cout<<q2<<endl;
            cout<<q3<<endl;
        }else{
            int m1,m2;
            m2 = v1.at((v1.size()/2));
            m1 = v1.at((v1.size()/2)-1);
            cout<<m1<<"q2"<<m2<<endl;
            q2=((m1+m2)/2);
            cout<<q2;
            vq1.assign(v1.begin(), (v1.begin()+(v1.size()/2)));
            vq2.assign((v1.begin()+(v1.size()/2)), v1.end()); 
            for(int i:vq1){
                cout<<i<<"vq1"<<endl;
            }
            for(int i:vq2){
                cout<<i<<"vq2"<<endl;
            }
            q1 = vq1.at((vq1.size()/2));
            q3 = vq2.at((vq2.size()/2));
            cout<<q1<<endl;
            cout<<q2<<endl;
            cout<<q3<<endl;
        }
    }
};

int main(){
    Solution s;
    vector<int> v;
    v.push_back(3);
    v.push_back(45);
    v.push_back(5);
    v.push_back(9);
    v.push_back(1);
    v.push_back(3);
    v.push_back(13);
    v.push_back(10);
    s.findQuartiles(v);
    return 0;
}
