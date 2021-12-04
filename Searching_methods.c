#include<stdio.h>
#include "Searching_algos.h"


// This is Linear_search 
// Time complexity :  best --> O(1)  , Worst --> O(n)
// Space complexity :  O(1)
// Basic concept behind this algoritm is traverse throughout array check for
// the key if key is equal to any element return index else return -1.
int Linear_search(int Arr[], int Len, int Val)
{
    int Ind = -1;
    for(int i = 0; i < Len; i++)
    {
        if(Arr[i] == Val)
        {
            Ind = i;
            break;
        }
    }
    return Ind;
}


// This is Binary_search 
// Time complexity :  best --> O(1)  , Average --> O(log(n))  , Worst --> O(log(n))
// Space complexity :  O(1)
// Basic concept behind this algorithm is that it works only on sorted array .
// repeatedly it divides the array in half and search for the key in that.
// this is what we call divide and conquer.
int Binary_search(int Arr[], int Len, int Val)
{
    int Ind = -1;
    int Start = 0, End = Len - 1, Mid = 0;
    while(Start <= End)
    {
        Mid = (Start + End)/2;
        if (Val == Arr[Mid]){
            Ind = Mid;
            break;
        }
        if(Arr[Mid] < Val)
        {
            Start = Mid+1;
        }
        else
        {
            End = Mid-1;
        }
    }
    return Ind;
}

/*
int main()
{
    int Arr[5] = {10 , 20 , 30 , 40 , 50};
    int Val = Linear_search(Arr , 5 , 40);
    printf("%d\n",Val);

}*/