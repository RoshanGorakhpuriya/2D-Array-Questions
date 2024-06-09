#include<iostream>
using namespace std;

bool searchElement(int arr[][3] , int rowSize , int colSize , int target)
{
    for(int i=0 ; i<rowSize ; i++)
    {
        for(int j=0 ; j<colSize ; j++)
        {
            if(arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
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

   bool ans = searchElement(arr , rowSize , colSize , target);

   if(ans)
   {
    cout<<"Element has found\n";
   }
   else
   {
    cout<<"Element not found\n";
   }
}