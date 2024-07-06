#include<iostream>
using namespace std;

void  rowWithMaxOnes(int arr[][3] , int row , int col)
{
    int maxCount = 0;
    int updatedRow = 0;
    for(int r=0 ; r<row ; r++)
    {
        int count = 0;
        for(int c=0 ; c<col ; c++)
        {
            if(arr[r][c] == 1)
            {
                count++;
            }
        }
        // if youu are updating maxCount then we should update updatedRow;
        if(count > maxCount)
        {
            maxCount = max(maxCount , count);
            updatedRow = r;
        }
    }
    cout<<"Row is = "<<updatedRow<<" and maximum count is = "<<maxCount<<endl;
}

int main(){
    int arr[3][3] = {{0 , 0 , 0},
                     {0 , 1 ,1 },
                     {1 , 1 , 1}};

                     
    int row = 3;      
    int col = 3;
                     
    rowWithMaxOnes(arr , row , col);
}