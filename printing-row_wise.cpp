#include<iostream>
using namespace std;

void printing_row_wise(int arr[][3] , int rowSize , int colSize)
{
    for(int r=0 ; r<rowSize ; r++)
    {
        for(int c=0 ; c<colSize ; c++)
        {
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3];
    int rowSize = 3;
    int colSize = 3;

    for(int r=0 ; r<rowSize ; r++)
    {
        cout<<"Accessing "<<r+1<<" row\n";
        for(int c=0 ; c<colSize ; c++)
        {
            cin>>arr[r][c];
        }
    }

    printing_row_wise(arr , rowSize , colSize);

}