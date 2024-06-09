#include<iostream>
using namespace std;

void transpose(int arr[][3] , int rowSize , int colSize)
{
    int ans[3][3] = {0};
    for(int r=0 ; r<rowSize ; r++)
    {
        for(int c=0 ; c<colSize ; c++)
        {
            ans[c][r] = arr[r][c];
        }
    }
    for(int r=0 ; r<rowSize ; r++)
    {
        for(int c=0 ; c<colSize ; c++)
        {
            cout<<ans[r][c]<<" ";
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

    for(int r=0 ; r<rowSize ; r++)
    {
        for(int c=0 ; c<colSize ; c++)
        {
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
                
    cout<<endl;

   transpose(arr , rowSize , colSize);


   
}