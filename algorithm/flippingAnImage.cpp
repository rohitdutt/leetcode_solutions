#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void flippingAnImage(vector<vector<int>>& image){
    for(int i = 0; i<image.size(); i++){
        int j = 0;
        int k = image[i].size() - 1;
        while (j < k){
            swap(image[i][j], image[i][k]);
            j++;
            k--;
        }
        for(j = 0; j < image[i].size(); j++){
            image[i][j] = image[i][j] == 0 ? 1 : 0;
        }
    }
}

int main(int argc, char const *argv[]){
    vector<vector<int>> image = {
        {1,1,0},
        {1,0,1},
        {0,0,0}
    };
    for(int i = 0; i<image.size(); i++){
        for(int j = 0; j<image.size(); j++){
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
    flippingAnImage(image);
    for(int i = 0; i<image.size(); i++){
        for(int j = 0; j<image.size(); j++){
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
