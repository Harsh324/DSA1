#include<stdio.h>
#include<stdlib.h>

// These declartions are required in codes of aorting algos
void Swap(int *A , int *B);
void merge(int Arr[], int Start, int Mid, int Right);
int partition (int arr[], int low, int high);

// Prototypes for the sorting algos 
void Selection_sort(int Arr[] , int Len);
void Bubble_sort(int Arr[] , int Len);
void Insertion_sort(int Arr[] , int Len);
void Merge_sort(int Arr[] , int Start , int End);
void Quick_sort(int Arr[] , int Low , int High);


