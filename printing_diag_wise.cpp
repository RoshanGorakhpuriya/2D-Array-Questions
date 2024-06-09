#include<iostream>
using namespace std;

void printing_diag_wise_rev(int arr[][3] , int rowSize , int colSize)
{
    for(int r=0 ; r<rowSize ; r++)
    {
        for(int c=0 ; c<colSize ; c++)
        {
            if((r+c) == (rowSize-1))
            {
                cout<<arr[r][c]<<" ";
            }
        }
    }
}

void printing_diag_wise(int arr[][3] , int rowSize , int colSize)
{
    for(int r=0 ; r<rowSize ; r++)
    {
        for(int c=0 ; c<colSize ; c++)
        {
            if(r == c)
            {
                cout<<arr[r][c]<<" ";
            }
        }
    }
    cout<<endl;
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

    printing_diag_wise(arr , rowSize , colSize);

    printing_diag_wise_rev(arr , rowSize , colSize);

}