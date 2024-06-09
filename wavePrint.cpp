#include<iostream>
using namespace std;

void wavePrint(int arr[][3] , int rowSize , int colSize)
{
    for(int c=0 ; c<colSize ; c++)
    {
        if(c%2 == 0)
        {
            for(int r=0 ; r<rowSize ; r++)
            {
                cout<<arr[r][c]<<" ";
            }
        }
        else 
        {
            for(int r=rowSize-1 ; r>=0 ; r--)
            {
                cout<<arr[r][c]<<" ";
            }
        }
    }
}

int main(){
    int arr[3][3];

    int rowSize = 3;
    int colSize = 3;

    for(int i=0 ; i<rowSize ; i++)
    {
        cout<<"Accessing "<<i+1<<" row\n";
        for(int j=0 ; j<colSize ; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0 ; i<rowSize ; i++)
    {
        for(int j=0 ; j<colSize ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    wavePrint(arr , rowSize , colSize);
}