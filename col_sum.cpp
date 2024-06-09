#include<iostream>
using namespace std;

void print_col_sum(int arr[3][3] , int rowSize , int colSize)
{
    for(int c=0 ; c<colSize ; c++)
    {
        int sum = 0;
        for(int r=0 ; r<rowSize ; r++)
        {
            sum = sum + arr[r][c];
        }
        cout<<"Sum of col "<<c+1<<" is = "<<sum<<endl;
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

    for(int r=0 ; r<rowSize ; r++)
    {
        for(int c=0 ; c<colSize ; c++)
        {
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
    print_col_sum(arr , rowSize , colSize);
}