#include<iostream>
#include<algorithm>
using namespace std;

void rotateImage(int arr[][3] , int row , int col)
{
    //step-1 -> Transpose the matrix
    for(int i=0 ; i<row ; i++)
    {
        for(int j=i ; j<col; j++)
        {
            swap(arr[i][j] , arr[j][i]);
        }
    }

    // step-2 -> Reverse the row
    for(int i=0 ; i<row ; i++)
    {
        for(int j=col-1 ; j>=0 ; j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int arr[3][3] = {{1 , 2 , 3},
                      {4 , 5 , 6},
                      {7 , 8 , 9}};

    int row = 3;
    int col = 3;

    rotateImage(arr , row , col);

}