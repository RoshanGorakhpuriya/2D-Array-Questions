#include<iostream>
#include<limits.h>
using namespace std;

int maxElement(int arr[][3] , int rowSize , int colSize , int target)
{
    int max = INT_MIN;
    for(int i=0 ; i<rowSize ; i++)
    {
        for(int j=0 ; j<colSize ; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
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
                  

   int target = 8;

   int  ans = maxElement(arr , rowSize , colSize , target);

   cout<<"Maximum Element is = "<<ans<<endl;
}