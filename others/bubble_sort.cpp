// C++ program for implementation of Bubble sort  
// #include <bits/stdc++.h> 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  
/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  


int randomArray () 
{
	list<int> intList = new list<int>;
	for (int i=0; i<=2000; i++) {
		intList[i] = min + (rand() % static_cast<int>(101));
	}
}
  
// Driver code  
int main()  
{  
    int arr[] = randomArray(); 
    int n = sizeof(arr)/sizeof(arr[0]);  
    using namespace std::chrono; 
	// Use auto keyword to avoid typing long 
	// type definitions to get the timepoint 
	// at this instant use function now() 
	auto start = high_resolution_clock::now(); 
    bubbleSort(arr, n);  
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start); 
    // cout<<"Sorted array: \n"
    cout<< "Time taken by function: "
    << duration.count() << " microseconds" << endl; ;  
    // printArray(arr, n);  
    return 0;  
}  
