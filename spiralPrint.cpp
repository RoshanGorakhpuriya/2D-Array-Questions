#include<iostream>
using namespace std;

void spiralPrint(int arr[][4] , int rowSize , int colSize)
{
    int startingRow = 0;
    int endingRow = rowSize-1;
    int startingCol = 0;
    int endingCol = colSize-1;

    int total = rowSize * colSize;
    int count = 0;

    while(count < total)
    {
        for(int i=startingCol; i<=endingCol && (count<total) ; i++)
        {
            cout<<arr[startingRow][i]<<" ";
            count++;
        }

        startingRow++;

        for(int i=startingRow ; i<=endingRow && (count<total) ; i++)
        {
            cout<<arr[i][endingCol]<<" ";
            count++;
        }

        endingCol--;

        for(int i=endingCol ; i>=startingCol && (count<total) ; i--)
        {
            cout<<arr[endingRow][i]<<" ";
            count++;
        }

        endingRow--;

        for(int i=endingRow ; i>=startingRow && (count<total) ; i--) 
        {
            cout<<arr[i][startingCol]<<" ";
            count++;
        }
        startingCol++;
    }
}

int main(){
    int arr[3][4] = {{1 , 2 , 3 , 4 },
                     {5 , 6 , 7 , 8},
                     {9 , 10 , 11 , 12}};

    int rowSize = 3;
    int colSize = 4;

    spiralPrint(arr , rowSize , colSize);
}