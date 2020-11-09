#include<iostream>
#include<vector>
using namespace std;

class Solution{
    int fine=0;
    public:
    int nestedLogic(vector<int>& returnDate , vector<int>& expectedDate){
        int year = returnDate[2] - expectedDate[2];
        int month = returnDate[1] - expectedDate[1];
        int date = returnDate[0] - expectedDate[0];
        cout<<date<<" "<<month<<" "<<year; 
       if(year>0){
            fine = 10000;
            return fine;
        }else if(year<0){
            return 0;
        }else{
            if(month>0){
                fine = 500*month;
                return fine;
            }else if(month<0){
                return 0;
            }else{
                if (date>0){
                    fine = 15*date;
                    return fine;
                }else if(date<0){
                    return 0;
                }
            }
        }
        return fine;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> returnDate;
    vector<int> expectedDate;
    Solution s;
    int temp=0;
    for(int i=0;i<3;i++){
        cin>>temp;
        returnDate.push_back(temp);
    }
    for(int i=0;i<3;i++){
        cin>>temp;
        expectedDate.push_back(temp);
    }
    cout<<s.nestedLogic(returnDate,expectedDate);
    return 0;
}


