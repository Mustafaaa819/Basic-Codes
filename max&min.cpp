#include<iostream>
using namespace std;
int main(){
    int arrTwo[3][4];
    
    cout<<" Enter the Elements of 2D Array: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<" Enter Element [" << i+1 << "][" << j+1 << "]: ";
            cin>>arrTwo[i][j];
        }
    }

    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arrTwo[i][j] > max){
                max = arrTwo[i][j];
            }
            if(arrTwo[i][j] < min){
                min = arrTwo[i][j];
            }
        }
    }

    cout<<" The Maximum Element in the Matrix: " << max << endl;
    cout<<" The Minimum Element in the Matrix: " << min << endl;

    return 0;
}