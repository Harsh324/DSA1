#include<stdio.h>
#include<stdlib.h>

// These declartions are required in codes of aorting algos
void Swap(int *A , int *B);
void merge(int Arr[], int Start, int Mid, int Right);
int partition (int arr[], int low, int high);


// This is Selection Sort 
// Time Complexity is   :  Best --> O(n^2)   ,  Worst --> O(n^2)  , Average --> O(n^2)
// Space Complexity is   :   O(1)
// Basic Concept behind selection sort is start with element of Array. traverse through complete Array,
// if Any element is less than that elemnt , Swap them and continue with next element of Array. 
void Selection_sort(int Arr[] , int Len);


// This is Bubble sort
// Time Complexity  :  Best --> O(n)  ,  Average --> O(n^2)  ,  Worst --> O(n^2) 
// Space Complexity  :  O(1)
// Basic Concept behind this algorithm is traverse through Array is next element is ,
// less than prevoius the Swap the two again continue for the remaining array. 
void Bubble_sort(int Arr[] , int Len);



// This is Insertion sort
// Time Complexity  :  Best --> O(n)  ,  Average --> O(n^2)  ,  Worst --> O(n^2) 
// Space Complexity  :  O(1)
// Basic concept behind thsi algorithm is that the array is virtually split into a sorted and an unsorted part.
// Values from the unsorted part are picked and placed at the correct position in the sorted part.
void Insertion_sort(int Arr[] , int Len);


// This is Merge_sort
// Time Complexity  :  Best --> O(nlog(n))  ,  Average --> O(nlog(n))  ,  Worst --> O(nlog(n)) 
// Space Complexity  :  O(n)
// Basic idea behind this algorithm is to split the array in half untill it is possile to split ,
// the array then sort and combine them in order wise.
void Merge_sort(int Arr[] , int Start , int End);


// This is Quick sort
// Time Complexity  :  Best --> O(nlog(n))  ,  Average --> O(nlog(n))  ,  Worst --> O(n^2) 
// Space Complexity  :  O(n)
// Basic idea behind this algorithm is make a pivot and sort arround that pivot then merge according ,
// somewhat is similar to merge sort.
void Quick_sort(int Arr[] , int Low , int High);


