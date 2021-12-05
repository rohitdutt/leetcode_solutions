#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    // transpose image
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j < i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // reverse each row
    for(int i = 0; i < matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
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
    rotate(image);
    for(int i = 0; i<image.size(); i++){
        for(int j = 0; j<image.size(); j++){
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
