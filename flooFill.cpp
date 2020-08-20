#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void fill(vector<vector<int>>& image, int i, int j,int color, int newColor){
        if(i<0 || j<0||i>image.size()||j>image[i].size()||color!=image[i][j]){
            return;
        }
        image[i][j] = newColor;
        fill(image,i+1,j,color,newColor);
        fill(image,i-1,j,color,newColor);
        fill(image,i,j+1,color,newColor);
        fill(image,i,j-1,color,newColor);
       
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       if(image[sr][sc] == newColor){
           return image;
       }
       fill( image,  sr, sc, image[sr][sc],  newColor);
    }
};
int main(int argc, char const *argv[])
{
    
    return 0;
}
