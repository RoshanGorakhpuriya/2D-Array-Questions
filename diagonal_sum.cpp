#include<iostream>
using namespace std;

void print_diagonal_sum_rev(int arr[3][3] , int rowSize , int colSize)
{
    int sum = 0;
    for(int r=0 ; r<rowSize ; r++)
    {
        for(int c=0 ; c<colSize ; c++)
        {
            if((r+c) == (rowSize-1))
            {
                sum = sum + arr[r][c];
            }
        }
    }
    cout<<"Sum of diagonal is = "<<sum<<endl;
}


void print_diagonal_sum(int arr[3][3] , int rowSize , int colSize)
{
    int sum = 0;
    for(int r=0 ; r<rowSize ; r++)
    {
        for(int c=0 ; c<colSize ; c++)
        {
            if(r == c)
            {
                sum = sum + arr[r][c];
            }
        }
    }
    cout<<"Sum of diagonal is = "<<sum<<endl;
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

    print_diagonal_sum(arr , rowSize , colSize);

    print_diagonal_sum_rev(arr , rowSize , colSize);
}