#include<stdio.h>
#include "Sorting_algos.h"




// This is Selection Sort 
// Time Complexity is   :  Best --> O(n^2)   ,  Worst --> O(n^2)  , Average --> O(n^2)
// Space Complexity is   :   O(1)
// Basic Concept behind selection sort is start with element of Array. traverse through complete Array,
// if Any element is less than that elemnt , Swap them and continue with next element of Array. 

void Selection_sort(int Arr[] , int Len)
{
    int Ind = 0;
    for (int i = 0; i < Len-1; i++)
    {
        Ind = i;
        //int Val = Arr[i];
        for (int j = i+1; j < Len; j++)
        {
            if (Arr[j] < Arr[Ind])
            {
                Ind = j;
            }
        }
        Swap(&Arr[Ind], &Arr[i]);
      }
}




// This is Bubble sort
// Time Complexity  :  Best --> O(n)  ,  Average --> O(n^2)  ,  Worst --> O(n^2) 
// Space Complexity  :  O(1)
// Basic Concept behind this algorithm is traverse through Array is next element is ,
// less than prevoius the Swap the two again continue for the remaining array. 
void Bubble_sort(int Arr[] , int Len)
{
    for(int i = 0 ; i < Len - 1 ; i++)
    {
        for(int j = 0; j < Len - i - 1;j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                Swap(&Arr[j] , &Arr[j+1]);
            }
        }
    }
}



// This is Insertion sort
// Time Complexity  :  Best --> O(n)  ,  Average --> O(n^2)  ,  Worst --> O(n^2) 
// Space Complexity  :  O(1)
// Basic concept behind thsi algorithm is that the array is virtually split into a sorted and an unsorted part.
// Values from the unsorted part are picked and placed at the correct position in the sorted part.
void Insertion_sort(int Arr[] , int Len)
{
    int Var = 0 , j = 0;
	for (int i = 1; i < Len; i++)
    {
	    Var = Arr[i];
	    j = i - 1;

	    while (j >= 0 && Arr[j] > Var)
        {
	        Arr[j + 1] = Arr[j];
		    j = j - 1;
	    }
	    Arr[j + 1] = Var;
	}
}



// This is Merge_sort
// Time Complexity  :  Best --> O(nlog(n))  ,  Average --> O(nlog(n))  ,  Worst --> O(nlog(n)) 
// Space Complexity  :  O(n)
// Basic idea behind this algorithm is to split the array in half untill it is possile to split ,
// the array then sort and combine them in order wise.
void Merge_sort(int Arr[], int Start, int Right)
{
    if (Start < Right)
    {
        int Mid = (Start + Right) / 2;

        /*recursively sort first and second halves*/
        Merge_sort(Arr, Start, Mid);
        Merge_sort(Arr, Mid + 1, Right);

        merge(Arr, Start, Mid, Right);
    }
}


// This is Quick sort
// Time Complexity  :  Best --> O(nlog(n))  ,  Average --> O(nlog(n))  ,  Worst --> O(n^2) 
// Space Complexity  :  O(n)
// Basic idea behind this algorithm is make a pivot and sort arround that pivot then merge according ,
// somewhat is similar to merge sort.
void Quick_sort(int Arr[], int low, int high)
{
    if (low < high)
    {
        // pivot_index is partitioning index, Arr[pivot_index] is now at correct place in sorted Array
        int pivot_index = partition(Arr, low, high);

        Quick_sort(Arr, low, pivot_index - 1);  // Before pivot_index
        Quick_sort(Arr, pivot_index + 1, high); // After pivot_index
    }
}



// This is Swap Function this Function is used inside selection , merge , quick , Bubble sorts
void Swap(int *A , int *B)
{
    int Temp = *A;
    *A = *B;
    *B = Temp;
}

// This is merge function used in merge sort . 
// since merge sort is recursive hence it becomes neccassory to make merge function.
void merge(int Arr[], int Start, int Mid, int Right)
{
    int Left_Array = Mid - Start + 1;
    int Right_Array = Right - Mid;
  
    int left_Arr[Left_Array], right_Arr[Right_Array];
  
    for (int i = 0; i < Left_Array; i++)
      left_Arr[i] = Arr[Start + i];
  
    for (int j = 0; j < Right_Array; j++)
      right_Arr[j] = Arr[Mid + 1 + j];
  
    int i = 0, j = 0, k = Start;

    i = 0;
    j = 0;
    k = Start;
    while (i < Left_Array && j < Right_Array) 
    {
        if (left_Arr[i] <= right_Arr[j]) 
        {
            Arr[k] = left_Arr[i];
            i++;
        }
        else 
        {
            Arr[k] = right_Arr[j];
            j++;
        }
        k++;
    }
  
    while (i < Left_Array) 
    {
        Arr[k] = left_Arr[i];
        i++;
        k++;
    }
  
    while (j < Right_Array) 
    {
        Arr[k] = right_Arr[j];
        j++;
        k++;
    }
}

// This is Partition function used in quick sort . 
// Since quick sort uses pivot hence it becomes neccassory to virtually divide array.
int partition (int Arr[], int low, int high)
{
    int pivot = Arr[high];  // selecting last element as pivot
    int i = (low - 1);  // index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If the current element is smaller than or equal to pivot
        if (Arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            Swap(&Arr[i], &Arr[j]);
        }
    }
    Swap(&Arr[i + 1], &Arr[high]);
    return (i + 1);
}

// This is main function 
/*
int main()
{
    int Arr[5] = {10 , 1, 8 , 14 , 9};
    for(int i = 0; i < 5; i++)
    {
        printf("%d , ",Arr[i]);
    }
    printf("\n");

    //Selection_sort(Arr , 5);
    //Bubble_sort(Arr , 5);
    //Insertion_sort(Arr , 5);
    //Merge_sort(Arr ,0,5);
    Quick_sort(Arr , 0 , 5);

    for(int i = 0; i < 5; i++)
    {
        printf("%d , ",Arr[i]);
    }
    printf("\n");
}*/