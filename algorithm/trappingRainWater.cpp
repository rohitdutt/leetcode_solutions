#include<iostream>
#include<vector>

using namespace std;

int trap(vector<int>& height){
    vector<int> maxLeft(height.size(), 0);
    vector<int> maxRight(height.size(), 0);
    maxLeft[0] = height[0];
    for(int i=1;i<height.size();i++){
        maxLeft[i] = max(maxLeft[i-1],height[i]);
    }
    //print maxLeft array
    for(int i=0;i<maxLeft.size();i++){
        cout<<maxLeft[i]<<" ";
    }
    cout<<endl;
    maxRight[height.size() - 1] = height[height.size()-1];
    for(int i=height.size()-2;i>=0;i--){
        maxRight[i] = max(maxRight[i+1],height[i]);
    }
    //print maxRight array
    for(int i=0;i<maxRight.size();i++){
        cout<<maxRight[i]<<" ";
    }
    vector<int> water;
    for(int i = 0; i<height.size();i++){
        water.push_back(min(maxLeft[i],maxRight[i])-height[i]);
    }
    int result = 0;
    for(int i:water){
        result+=i;
    }
    return result;
}

int main(int argc, char const *argv[]){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height)<<endl;
    return 0;
}
