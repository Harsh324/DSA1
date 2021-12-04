#include<stdio.h>
#include<stdlib.h>



// This is Linear_search 
// Time complexity :  best --> O(1)  , Worst --> O(n)
// Space complexity :  O(1)
// Basic concept behind this algoritm is traverse throughout array check for
// the key if key is equal to any element return index else return -1.
int Linear_search(int Arr[], int Len, int Val);


// This is Binary_search 
// Time complexity :  best --> O(1)  , Average --> O(log(n))  , Worst --> O(log(n))
// Space complexity :  O(1)
// Basic concept behind this algorithm is that it works only on sorted array .
// repeatedly it divides the array in half and search for the key in that.
// this is what we call divide and conquer.
int Binary_search(int Arr[], int Len, int Val);
