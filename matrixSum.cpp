#include<iostream>
using namespace std;
int main(){
    int m1[2][2] = {{1,2},{3,4}};
    int m2[2][2] = {{5,6},{7,8}};
    int m3[2][2] = {{9,10},{11,12}};

    int resultThree[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            resultThree[i][j] = m1[i][j] + m2[i][j] + m3[i][j];
        }
    }

    cout<<" The Sum of Three 2D Arrays is: " << endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<resultThree[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}